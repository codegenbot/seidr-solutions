def fix_spaces(text):
    text = text.strip()
    if text.startswith(" "):
        text = "-" + text[1:]
    return text.replace(" ", "_")