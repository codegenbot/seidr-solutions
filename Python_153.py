def Strongest_Extension(class_name, extensions):
    def strength(extension):
        upper_count = sum(1 for char in extension if char.isupper())
        lower_count = sum(1 for char in extension if char.islower())
        if upper_count == 0:
            if lower_count == 0:
                return 0
            else:
                return -lower_count
        return upper_count - lower_count

    strongest_extension = max(extensions, key=lambda x: (strength(x), extensions.index(x)))
    return f"{class_name}.{strongest_extension}"