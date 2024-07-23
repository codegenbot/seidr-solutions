def Strongest_Extension(class_name, extensions):
    max_strength = 0
    strongest_extension = ""

    for extension in extensions:
        strength = sum(1 for c in extension if c.isupper()) - sum(
            1 for c in extension if c.islower()
        )

        if strength > max_strength:
            max_strength = strength
            strongest_extension = extension

    return f"{class_name}.{strongest_extension}"