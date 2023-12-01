def Strongest_Extension(class_name, extensions):
    strength = lambda ext: ext.count(ext.upper()) - ext.count(ext.lower())
    strongest_ext = max(extensions, key=strength)
    return f"{class_name}.{strongest_ext}"