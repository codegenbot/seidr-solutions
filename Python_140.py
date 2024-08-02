def fix_spaces(text):
    text = text.replace("  ", "_").replace(" ", "-").replace("-", "")
    return text