def fix_spaces(text):
    text = text.replace(" ", "_").replace("  ", " ").strip("_")
    while "  " in text:
        text = text.replace("  ", " ")
    return text