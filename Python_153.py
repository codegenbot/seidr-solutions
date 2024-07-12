def Strongest_Extension(class_name, extensions):
    def strength(extension):
        extension_lower = extension.lower()
        upper_count = sum(1 for char in extension_lower if char.isupper())
        lower_count = sum(1 for char in extension_lower if char.islower())
        if upper_count == lower_count:
            return (upper_count, -lower_count)
        return (upper_count, -lower_count) if upper_count > lower_count else (lower_count, -upper_count)

    strongest_extension = max(extensions, key=lambda x: (strength(x), extensions.index(x)))
    return f"{class_name}.{strongest_extension}"