def Strongest_Extension(class_name, extensions):
    def strength(extension):
        return sum(1 for c in extension if c.isupper()) - sum(1 for c in extension if c.islower())

    strongest_extension = max(extensions, key=lambda x: (strength(x), extensions.index(x)))
    return f"{class_name}.{strongest_extension}"