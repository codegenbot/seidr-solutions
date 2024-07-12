def Strongest_Extension(extension, extensions_list):
    try:
        extensions_list = [int(ext) for ext in extensions_list]
    except ValueError:
        pass
    
    extension = int(extension)

    if extension not in extensions_list:
        return str(extension)
      
    extension_index = extensions_list.index(extension)
    
    if extension_index == 0:
        return f"{extension}.{max(extensions_list)}"
      
    return f"{extension}.{extensions_list[extension_index - 1]}" if extensions_list[extension_index - 1] > extension else f"{extension}.{extension}"