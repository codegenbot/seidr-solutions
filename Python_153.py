def Strongest_Extension(class_name, extensions):
    strongest = None
    max_strength = 0

    for extension in extensions:
        cap = sum(1 for char in extension if char.isupper())
        sm = len(extension) - cap

        strength = cap - sm
        if strength > max_strength or (
            strength == max_strength
            and extensions.index(extension) < extensions.index(strongest)
        ):
            strongest = extension

    return f"{class_name}.{strongest}"