def Strongest_Extension(class_name, extensions):
    return f"{class_name}.{sorted(extensions, key=lambda x: sum(1 for c in x if c.isupper()) - sum(1 for c in x if c.islower()))[0]}"