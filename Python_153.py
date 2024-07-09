def Strongest_Extension(class_name, extensions):
    strongest = max(extensions, key=lambda x: sum(1 for c in str(x) if c.isupper()),)
    return f"{class_name}.{strongest}"