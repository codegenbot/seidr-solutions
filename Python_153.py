def strength(extension):
    if isinstance(extension, int):
        extension_str = str(extension)
    else:
        extension_str = str(extension).lower()

    if extension_str.isalpha():
        upper_count = sum(1 for char in extension_str if char.isupper())
        lower_count = sum(1 for char in extension_str if char.islower())
        return (
            max(upper_count, lower_count),
            len(extension_str),
            -extension.index(extension),
        )
    elif extension_str.isdigit():
        return (0, len(extension_str), -extension.index(extension))
    else:
        return (0, 0, -extension.index(extension))