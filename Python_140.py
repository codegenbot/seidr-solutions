def fix_spaces(text):
    text = text.strip().replace(" ", "_")
    while "  " in text:
        text = text.replace("  ", "_")
    return text