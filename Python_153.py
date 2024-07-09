def Strongest_Extension(class_name, extensions):
    strongest = (None, 0)
    for extension in extensions:
        cap = sum(1 for c in extension if c.isupper())
        sm = len(extension) - cap
        strength = cap - sm
        if strength > strongest[1]:
            strongest = ((extension), strength)
    return f"{class_name}.{strongest[0][0]}"