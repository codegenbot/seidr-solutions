def Strongest_Extension(class_name, extensions):
    max_strength = -1
    strongest_extension = ""
    for extension in extensions:
        cap = sum(1 for char in extension if char.isupper())
        sm = len(extension) - cap
        strength = cap - sm
        if strength > max_strength or (
            strength == max_strength
            and extensions.index(extension) < extensions.index(strongest_extension)
        ):
            max_strength = strength
            strongest_extension = extension
    return f"{class_name}.{strongest_extension}"