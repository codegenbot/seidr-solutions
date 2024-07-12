def Strongest_Extension(extension, extensions_list):
    if extension not in extensions_list:
        return extension
    extension_index = extensions_list.index(extension)
    max_extension = max(extensions_list)
    return f"{extension}.{max_extension}"