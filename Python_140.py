def fix_spaces(text):
    text = text.replace(" ", "_")
    text = text.replace("_", "-")

    if text.startswith("_"):
        text = "-" + text[2:]

    return text