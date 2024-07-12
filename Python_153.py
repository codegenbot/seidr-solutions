def Strongest_Extension(class_name, extensions):
    def strength(extension):
        extension_lower = extension.lower()
        if all(char.isupper() or char.islower() for char in extension_lower):
            upper_count = sum(1 for char in extension_lower if char.isupper())
            lower_count = sum(1 for char in extension_lower if char.islower())
            return (max(upper_count, lower_count), len(extension), -extensions.index(extension))

        return (0, 0, 0)

    strongest_extension = max(
        extensions, key=lambda x: strength(x)
    )
    return f"{class_name}.{strongest_extension}"