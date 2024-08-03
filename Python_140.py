def fix_spaces(text):
    text = text.strip().replace("  ", "_").replace("_", "-")
    return text if " " in text else text.replace("_", "")