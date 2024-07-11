def Strongest_Extension(class_name, extensions):
    strongest = max(
        extensions,
        key=lambda x: len([c for c in x if c.isupper])
        - len([c for c in x if c.islower]),
    )
    return f"{class_name}.{strongest}"