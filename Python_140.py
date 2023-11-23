def fix_spaces(text):
    text = text.strip()
    text = text.replace(" ", "_")
    text = text.replace("__", "-")
    return text