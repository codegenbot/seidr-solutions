def Strongest_Extension(class_name, extensions):
    def strength(extension):
        if isinstance(extension, int):
            extension_str = str(extension)
            upper_count = sum(1 for char in extension_str if char.isdigit())
            lower_count = 0
            return (upper_count, len(extension_str), -extensions.index(extension))
        
        extension_str = extension.lower()
        
        if all(char.isupper() or char.islower() for char in extension_str):
            upper_count = sum(1 for char in extension_str if char.isupper())
            lower_count = sum(1 for char in extension_str if char.islower())
            return (max(upper_count, lower_count), len(extension_str), -extensions.index(extension))

        return (0, 0, 0)

    strongest_extension = max(
        extensions, key=lambda x: strength(x)
    )
    return f"{class_name}.{strongest_extension}"