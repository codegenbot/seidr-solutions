def Strongest_Extension(class_name, extensions):
    return f"{class_name}.{max(extensions, key=lambda x: x.count(x.upper()) - x.count(x.lower()))}"