def Strongest_Extension(extension, extensions_list):
    return extension + '.' + max(extensions_list) if extension in extensions_list else extension