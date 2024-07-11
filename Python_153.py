def Strongest_Extension(class_name, extensions):
    strongest_extension = max(
        extensions,
        key=lambda extension: sum(c.isupper() for c in extension)
        - sum(c.islower() for c in extension),
    )
    return f"{class_name}.{strongest_extension}"