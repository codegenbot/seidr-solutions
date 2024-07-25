def Strongest_Extension(class_name, extensions):
    def strength(extension):
        uppercase_count = sum(1 for char in extension if char.isupper())
        return uppercase_count if uppercase_count > 0 else 0

    strongest_extension = max(extensions, key=lambda x: (strength(x), extensions.index(x)))
    return f"{class_name}.{strongest_extension}"