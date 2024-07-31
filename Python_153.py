def Strongest_Extension(class_name, extensions):
    strongest = extensions[0]
    max_strength = sum(1 for c in strongest if c.isupper()) - sum(
        1 for c in strongest if c.islower()
    )

    for extension in extensions:
        strength = sum(1 for c in extension if c.isupper()) - sum(
            1 for c in extension if c.islower()
        )
        if strength > max_strength:
            strongest, max_strength = extension, strength

    return f"{class_name}.{strongest}"