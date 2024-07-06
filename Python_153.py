
def Strongest_Extension(class_name, extensions):
    strengths = {extension: len([char for char in extension if char.isupper()]) - len([char for char in extension if char.islower()]) for extension in extensions}
    strongest_extension = max(strengths, key=strengths.get)
    return f"{class_name}.{strongest_extension}"