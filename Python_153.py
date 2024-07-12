def Strongest_Extension(class_name, extensions):
    def strength(extension):
        extension_lower = extension.lower()
        upper_count = sum(1 for char in extension_lower if char.isupper())
        lower_count = sum(1 for char in extension_lower if char.islower())
        
        if upper_count == lower_count:
            return (upper_count, lower_count, -len(extension), -extensions.index(extension))
        
        return (
            (upper_count, -lower_count, -len(extension), -extensions.index(extension))
            if upper_count > lower_count
            else (lower_count, -upper_count, -len(extension), -extensions.index(extension))
        )

    strongest_extension = max(
        extensions, key=lambda x: (strength(x))
    )
    return f"{class_name}.{strongest_extension}"