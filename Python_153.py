def Strongest_Extension(class_name, extensions):
    def strength(extension):
        return sum(1 for char in extension if char.isupper()) - sum(1 for char in extension if char.islower())

    sorted_extensions = sorted(extensions, key=lambda x: (-strength(x), extensions.index(x)))
    strongest_extension = sorted_extensions[0]

    return f"{class_name}.{strongest_extension}"