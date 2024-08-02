def fix_spaces(text):
    text = text.replace(" ", "_")
    text = text.replace("--", "-")
    return text