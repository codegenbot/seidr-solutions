def fix_spaces(text):
    text = text.replace(" ", "_")
    text = text.replace("  ", "_")
    text = text.strip()
    return text