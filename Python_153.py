def Strongest_Extension(class_name, extensions):
    strongest = max(
        extensions, key=lambda s: (s.upper().count(""), s.lower().count(""))
    )
    return f"{class_name}.{strongest}"