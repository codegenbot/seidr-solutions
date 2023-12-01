def fix_spaces(text):
    text = text.replace(" ", "_")
    text = text.replace("__", "-")
    text = text.strip("_")
    return text