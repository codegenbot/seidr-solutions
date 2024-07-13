def Strongest_Extension(class_name, extensions):
    def strength(extension):
        CAP = sum(1 for char in extension if char.isupper())
        SM = sum(1 for char in extension if char.islower())
        return CAP - SM

    strongest_extension = max(extensions, key=strength)
    return f"{class_name}.{strongest_extension}"