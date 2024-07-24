def Strongest_Extension(class_name, extensions):
    def strength(extension):
        return extension.count(extension.upper()) - extension.count(extension.lower())

    strongest_extension = max(extensions, key=lambda x: (strength(x), extensions.index(x)))
    return f"{class_name}.{strongest_extension}"