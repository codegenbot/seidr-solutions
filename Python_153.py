def Strongest_Extension(class_name, extensions):
    strongest_extension = max(
        extensions,
        key=lambda x: sum(i.isupper() for i in x) - sum(i.islower() for i in x),
    )
    return f"{class_name}.{strongest_extension}"