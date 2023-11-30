def fix_spaces(text):
    text = text.replace("_", " ").replace("-", " ").replace("  ", " ").strip()
    text = text.replace(" ", "_")
    return text