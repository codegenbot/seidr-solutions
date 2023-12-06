def Strongest_Extension(class_name, extensions):
    if not extensions:
        return None
    strength = 0
    strongest_extension = None
    for extension in extensions:
        cap = len([c for c in extension if c.isupper()])
        sm = len([c for c in extension if c.islower()])
        current_strength = cap - sm
        if current_strength > strength:
            strength = current_strength
            strongest_extension = extension
    return f"{class_name}.{strongest_extension}"