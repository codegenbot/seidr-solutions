def Strongest_Extension(class_name, extensions):
    extensions.sort(key=lambda x: (-len(str(x)), str(x).lower()))
    return f"{class_name}.{extensions[0]}"