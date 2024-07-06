```
def Strongest_Extension(class_name, extensions):
    strongest = (extensions[0], 0)
    for extension in extensions:
        cap = sum(c.isupper() for c in extension)
        sm = len(extension) - cap
        if cap - sm > strongest[1]:
            strongest = (extension, cap - sm)
    return f"{class_name}.{strongest[0]}"