def Strongest_Extension(class_name, extensions):
    def calculate_strength(extension):
        return sum(1 for char in extension if char.isupper()) - sum(
            1 for char in extension if char.islower()
        )

    strongest_extension = max(
        extensions, key=lambda x: (calculate_strength(x), extensions.index(x))
    )

    return f"{class_name}.{strongest_extension}"