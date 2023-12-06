```
def Strongest_Extension(class_name, extensions):
    strengths = {extension: len([char for char in extension if char.isupper()]) - len([char for char in extension if char.islower()]) for extension in extensions}
    return f"{class_name}.{max(strengths, key=strengths.get)}"
```