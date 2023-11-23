def fix_spaces(text):
    text = text.replace(" ", "_")
    text = text.replace("__", "_", 1)
    return text.replace("_", "-")