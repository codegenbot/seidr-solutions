def Strongest_Extension(class_name, extensions):
    strengths = [sum(1 for char in ext if char.isupper()) - sum(1 for char in ext if char.islower()) for ext in extensions]
    max_strength = max(strengths)
    strongest_ext = extensions[strengths.index(max_strength)]
    return f"{class_name}.{strongest_ext}"