def Strongest_Extension(extension, extensions_list):
    if extension not in extensions_list:
        return extension
    extension_index = extensions_list.index(extension)
    if extension_index == 0:
        return f"{extension}.{extensions_list[-1]}"
    return f"{extension}.{extensions_list[extension_index-1]}"