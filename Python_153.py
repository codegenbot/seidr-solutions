def Strongest_Extension(class_name, extensions):
    strongest = max(
        extensions,
        key=lambda x: sum(y.isupper() for y in x) - sum(y.islower() for y in x),
    )
    return f"{class_name}.{strongest}"