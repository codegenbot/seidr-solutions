def Strongest_Extension(class_name, extensions):
    strongest = max(
        extensions,
        key=lambda s: sum(c.isupper() for c in s) - sum(c.islower() for c in s),
    )
    return f"{class_name}.{strongest}"