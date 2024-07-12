def Strongest_Extension(extension, extensions_list):
    try:
        return f"{extension}.{max(int(ext) for ext in extensions_list)}"
    except ValueError:
        pass