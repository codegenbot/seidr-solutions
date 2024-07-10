def Strongest_Extension(class_name, extensions):
    def strength(extension):
        if not any(char.isupper() for char in extension) or not any(char.islower() for char in extension):
            return 0
        return sum(1 for char in extension if char.isupper()) - sum(1 for char in extension if char.islower())

    strongest_extension = max(extensions, key=lambda x: (strength(x), extensions.index(x)))
    return f"{class_name}.{strongest_extension}"