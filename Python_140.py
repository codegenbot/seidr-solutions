def fix_spaces(text):
    text = text.strip().replace("  ", " ").replace("--", "-").replace(" ", "_")
    return text