def Strongest_Extension(class_name, extensions):
    strengths = [
        (
            extension,
            len([c for c in extension if c.isupper()])
            - len([c for c in extension if c.islower()]),
        )
        for extension in extensions
    ]
    return f"{class_name}.{max(strengths, key=lambda x: x[1])[0]}"