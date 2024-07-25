def fix_spaces(text):
    return "_".join(text.split()).strip("_").replace("__", "_")