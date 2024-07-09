def fix_spaces(text):
    text = text.strip().replace(" ", "_")
    text = text.replace("--", "-")
    return text