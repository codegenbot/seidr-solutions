def Strongest_Extension(class_name, extensions):
    return f"{class_name}.{sorted(extensions, key=lambda x: x.count(x.upper()) - x.count(x.lower()))[0]}"