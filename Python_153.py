```
def Strongest_Extension(class_name, extensions):
    max_strength = 0
    strongest_extensions = []
    for extension in extensions:
        cap = sum(1 for c in extension if c.isupper())
        sm = len(extension) - cap
        strength = cap - sm
        if strength > max_strength:
            max_strength = strength
            strongest_extensions = [(extension),]
        elif strength == max_strength:
            strongest_extensions.append((extension,))
    return f"{class_name}.{','.join(map(lambda x: x[0], strongest_extensions))}"