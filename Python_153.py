def Strongest_Extension(class_name, extensions):
    strongest = None
    max_strength = -1
    for extension in extensions:
        cap = sum(1 for c in extension if c.isupper())
        sm = sum(1 for c in extension if c.islower())
        strength = cap - sm
        if strength > max_strength:
            strongest = extension
            max_strength = strength
    return f"{class_name}.{strongest}"