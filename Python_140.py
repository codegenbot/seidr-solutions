
def fix_spaces(text):
    text = text.replace("  ", "-", 1)
    return text.replace(" ", "_")