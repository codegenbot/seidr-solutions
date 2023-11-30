def fix_spaces(text):
    text = text.strip()
    text = text.replace(" ", "_")
    text = text.replace("_", "-")
    return text