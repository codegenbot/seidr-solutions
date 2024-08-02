def fix_spaces(text):
    text = text.strip().replace("  ", " ").replace(" ", "_").replace("--", "-")
    return text