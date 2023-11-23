def fix_spaces(text):
    text = text.replace(" ", "")
    text = text.replace("__", "-")
    text = text.replace(" ", "_")
    return text