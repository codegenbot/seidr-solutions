def Strongest_Extension(class_name, extensions):
    def strength(extension):
        return sum(1 for char in extension if char.isupper()) - sum(
            1 for char in extension if char.islower()
        )

    strongest_extension = max(
        extensions, key=lambda ext: (strength(ext), extensions.index(ext))
    )
    return f"{class_name}.{strongest_extension}"