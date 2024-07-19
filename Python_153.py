def Strongest_Extension(class_name, extensions):
    def strength(extension):
        upper_count = sum(1 for char in extension if char.isupper())
        lower_count = sum(1 for char in extension if char.islower())
        return (lower_count - upper_count, -ord(extension[0])) if upper_count <= 1 else (upper_count - lower_count, ord(extension[0]))

    strongest_extension = max(extensions, key=lambda x: (strength(x), x))

    return f"{class_name}.{strongest_extension}"