def Strongest_Extension(class_name, extensions):
    strength = 0
    strongest_extensions = []
    for extension in extensions:
        cap = len([c for c in extension if c.isupper()])
        sm = len([c for c in extension if c.islower()])
        current_strength = cap - sm
        if current_strength > strength:
            strength = current_strength
            strongest_extensions = [extension]
        elif current_strength == strength:
            strongest_extensions.append(extension)
    return f"{class_name}.{' '.join(strongest_extensions)}"