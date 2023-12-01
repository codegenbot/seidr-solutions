def fix_spaces(text):
    text = text.replace(" ", "_").replace("__", "-").replace("-", "_").replace("_", "-", 1)
    return text