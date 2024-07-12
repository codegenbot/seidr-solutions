def fix_spaces(text):
    text = text.replace("  ", "_").replace(" ", "_").replace("__", "_")
    return text