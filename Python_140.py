def fix_spaces(text):
    text = text.replace(" ", "_").replace("_", "").replace("--", "-")
    if text.startswith("-"):
        text = text[1:]
    return text