def Strongest_Extension(class_name, extensions):
    def strength(extension):
        upper_count = sum(1 for char in extension if char.isupper())
        lower_count = sum(1 for char in extension if char.islower())
        return upper_count - lower_count if upper_count > 0 else abs(lower_count)

    strongest_extension = max(extensions, key=lambda x: (strength(x), x))
    return f"{class_name}.{strongest_extension}"