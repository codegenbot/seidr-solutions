def fix_spaces(text):
    text = text.replace("  ", " ").replace(" ", "_").replace("__", "-").lstrip("_")
    return text