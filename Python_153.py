def Strongest_Extension(class_name, extensions):
    strongest = max(extensions, key=lambda x: (x.upper().count(x) - x.lower().count(x)))
    return f"{class_name}.{strongest}"