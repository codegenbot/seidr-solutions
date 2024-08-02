def Strongest_Extension(class_name, extensions):
    strongest = None
    max_strength = 0
    for extension in extensions:
        cap = sum(c.isupper() for c in extension)
        sm = len(extension) - cap
        strength = cap - sm
        if strength > max_strength or (
            strength == max_strength and extensions.index(extension) < max_strength
        ):
            strongest = extension
            max_strength = strength
    return f"{class_name}.{strongest}"