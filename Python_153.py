def Strongest_Extension(class_name, extensions):
    def strength(extension):
        num_uppercase = sum(1 for char in extension if char.isupper())
        num_lowercase = sum(1 for char in extension if char.islower())
        
        if num_uppercase == 0:
            return -num_lowercase
        return num_uppercase - num_lowercase

    strongest_extension = max(extensions, key=lambda x: (strength(x), -extensions.index(x)))
    return f"{class_name}.{strongest_extension}"