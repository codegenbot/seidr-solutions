def Strongest_Extension(class_name, extensions):
    def strength(extension):
        extension_lower = extension.lower()
        upper_count = sum(1 for char in extension_lower if char.isupper())
        lower_count = sum(1 for char in extension_lower if char.islower())
        return upper_count - lower_count if upper_count > 0 else lower_count

    strongest_extension = max(extensions, key=lambda x: (strength(x), -extensions.index(x)))
    return f"{class_name}.{strongest_extension}"