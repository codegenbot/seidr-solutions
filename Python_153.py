```
def Strongest_Extension(class_name, extensions):
    strongest = max(
        extensions,
        key=lambda x: (sum(c.isdigit() for c in x), -x),
    )
    return f"{class_name}.{strongest}"