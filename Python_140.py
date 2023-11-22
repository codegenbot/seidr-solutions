def fix_spaces(text):
    text = text.replace(" ", "-")
    text = text.replace("--", "-")
    text = text.replace("1", "_")
    return text