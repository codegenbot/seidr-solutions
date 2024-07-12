def Strongest_Extension(class_name, extensions):
    def strength(extension):
        return sum(1 for char in extension if char.isupper()) - sum(1 for char in extension if char.islower())

    filtered_extensions = [ext for ext in extensions if any(char.isalpha() for char in ext)]
    strongest_extension = max(filtered_extensions, key=lambda x: (strength(x), filtered_extensions.index(x)))
    return f"{class_name}.{strongest_extension}"