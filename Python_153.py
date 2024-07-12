def Strongest_Extension(class_name, extensions):
    def strength(extension):
        extension_lower = extension.lower()
        upper_count = sum(1 for char in extension_lower if char.isupper())
        lower_count = sum(1 for char in extension_lower if char.islower())
        digit_count = sum(1 for char in extension if char.isdigit())
        
        if upper_count == lower_count and upper_count > digit_count:
            return (upper_count, lower_count, -len(extension))
        return (
            (upper_count, -lower_count, -len(extension))
            if upper_count > lower_count and upper_count > digit_count
            else (lower_count, -upper_count, -len(extension))
        )

    strongest_extension = max(
        extensions, key=lambda x: (strength(x), extensions.index(x))
    )
    return f"{class_name}.{strongest_extension}"