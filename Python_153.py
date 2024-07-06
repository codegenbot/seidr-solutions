def Strongest_Extension(class_name, extensions):
    strongest = (0, '')
    for extension in extensions:
        cap = sum(1 for char in extension if char.isupper())
        sm = len(extension) - cap
        strength = cap - sm
        if strength > strongest[0]:
            strongest = (strength, extension)
        elif strength == strongest[0] and extension < strongest[1]:
            strongest = (strength, extension)
    return f"{class_name}.{strongest[1]}"