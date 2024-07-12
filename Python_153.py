def Strongest_Extension(class_name, extensions):
    def strength(extension):
        if isinstance(extension, int):
            extension_str = str(extension)
            return (0, -len(extensions), 0)
        else:
            extension_str = str(extension).lower()
        
        if all(char.isalpha() for char in extension_str):
            upper_count = sum(1 for char in extension_str if char.isupper())
            lower_count = sum(1 for char in extension_str if char.islower())
            return (
                max(upper_count, lower_count),
                len(extension_str),
                -extensions.index(extension),
            )
        elif extension_str.isdigit():
            return (0, -len(extensions), 0)

    strongest_extension = max(extensions, key=strength)
    return f"{class_name}.{strongest_extension}"