def Strongest_Extension(class_name, extensions):
    strengths = {extension: sum(1 for c in extension if c.isupper()) - sum(1 for c in extension if c.islower()) for extension in extensions}
    return f"{class_name}.{max(strengths, key=strengths.get)}"