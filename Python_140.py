def fix_spaces(text):
    text = text.replace(" ", "_")
    text = text.replace("  ", " - ")
    while "- -" in text:
        text = text.replace("- -", "- ")
    return text