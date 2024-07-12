def Strongest_Extension(class_name, extensions):
    def strength(extension):
        extension_lower = extension.lower()

        if extension_lower.islower() or extension_lower.isupper():
            return (len(extension), len(extension_lower), -extensions.index(extension))
        return (0, 0, 0)
    
    strongest_extension = max(extensions, key=lambda x: strength(x))
    return f"{class_name}.{strongest_extension}"