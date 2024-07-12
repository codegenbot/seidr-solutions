def Strongest_Extension(extension, extensions_list):
    extensions_list = [int(ext) for ext in extensions_list if ext.isdigit()]

    if not extension.isdigit() or int(extension) not in extensions_list:
        return f"{extension}.{max(extensions_list)}"

    extension = int(extension)
    extension_index = extensions_list.index(extension)

    return (
        f"{extension}.{extensions_list[extension_index - 1]}"
        if extension_index > 0
        else f"{extension}.{max(extensions_list)}"
    )