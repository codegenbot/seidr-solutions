def Strongest_Extension(class_name, extensions):
    max_strength = float('-inf')
    strongest_extension = ''
    
    for extension in extensions:
        strength = sum(1 for char in extension if char.isupper()) - sum(1 for char in extension if char.islower())
        if strength > max_strength:
            max_strength = strength
            strongest_extension = extension
    
    return f"{class_name}.{strongest_extension}"