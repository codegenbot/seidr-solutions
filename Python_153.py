def Strongest_Extension(class_name, extensions):
    def extension_strength(ext):
        CAP = sum(1 for c in ext if c.isupper())
        SM = sum(1 for c in ext if c.islower())
        return CAP - SM
    
    strongest_extension = max(extensions, key=extension_strength)
    return f"{class_name}.{strongest_extension}"