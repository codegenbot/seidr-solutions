def fix_spaces(text):
    text = text.replace(" ", "_").replace("_", "-", 1)
    return text