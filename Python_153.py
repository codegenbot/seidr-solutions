```
def Strongest_Extension(class_name, extensions):
    strongest = max(extensions, key=len)
    return f"{class_name}.{strongest}"