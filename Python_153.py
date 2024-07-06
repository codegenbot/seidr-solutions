def Strongest_Extension(class_name, extensions):
    strongest = None
    max_strength = -1
    for extension in extensions:
        upper_count = sum(1 for char in extension if char.isupper())
        lower_count = sum(1 for char in extension if char.islower())
        strength = upper_count - lower_count
        if strength > max_strength or (
            strength == max_strength and extensions.index(extension) < max_strength
        ):
            strongest = extension
            max_strength = strength
    return f"{class_name}.{strongest}"