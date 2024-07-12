def Strongest_Extension(extension, extensions_list):
    try:
        extension = int(extension)
    except ValueError:
        return f"{extension}.{max(int(ext) for ext in extensions_list)}"

    extensions_list = [int(ext) for ext in extensions_list]

    if not isinstance(extension, int) or extension not in extensions_list:
        return f"{extension}.{max(extensions_list)}"

    extension_index = extensions_list.index(extension)

    if extension_index == 0:
        return f"{extension}.{max(extensions_list)}"

    return (
        f"{extension}.{extensions_list[extension_index - 1]}"
        if extensions_list[extension_index - 1] > extension
        else f"{extension}.{extension}"
    )