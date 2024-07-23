def Strongest_Extension(class_name, extensions):
    max_strength = float('-inf')
    strongest_extension = ''
    
    for ext in extensions:
        cap = sum(1 for char in ext if char.isupper())
        sm = sum(1 for char in ext if char.islower())
        strength = cap - sm
        
        if strength > max_strength:
            max_strength = strength
            strongest_extension = ext
    
    return f"{class_name}.{strongest_extension}"