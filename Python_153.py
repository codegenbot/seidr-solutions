def Strongest_Extension(class_name: str, extensions: List[str]) -> str:
    def strength(extension: str) -> int:
        upper_count = sum(1 for char in extension if char.isupper())
        lower_count = sum(1 for char in extension if char.islower())
        if upper_count == 0 or lower_count == 0:
            return len(extension)
        return upper_count - lower_count

    strongest_extension = max(extensions, key=lambda x: (strength(x), extensions.index(x)))
    return f"{class_name}.{strongest_extension}"