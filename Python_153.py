def Strongest_Extension(class_name, extensions):
    strongest = max(
        extensions,
        key=lambda x: len("".join(c for c in x if c.isupper()))
        - len("".join(c for c in x if c.islower())),
    )
    return f"{class_name}.{strongest}"