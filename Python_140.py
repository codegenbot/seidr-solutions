def fix_spaces(text):
    text = text.replace("  ", " ").replace(" ", "_").replace("_-", "-")
    return text