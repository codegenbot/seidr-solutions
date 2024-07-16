def fix_spaces(text):
    text = text.replace("   ", "-")
    while "  " in text:
        text = text.replace("  ", "-")
    text = text.replace(" ", "_")
    return text