
def fix_spaces(text):
    if "  " in text:
        text = text.replace("  ", "-")
    return text.replace(" ", "_")