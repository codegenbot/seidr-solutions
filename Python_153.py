def Strongest_Extension(class_name, extensions):
    strongest = max(extensions, key=lambda x: (x.upper().count(), -x.lower().count()))
    return f"{class_name}.{strongest}"