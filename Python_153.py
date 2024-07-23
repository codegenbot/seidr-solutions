def Strongest_Extension(class_name, extensions):
    strongest_extension = max(
        extensions,
        key=lambda x: sum(c.isupper() for c in x) - sum(c.islower() for c in x),
    )
    return f"{class_name}.{strongest_extension}"