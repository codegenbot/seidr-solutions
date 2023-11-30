def fix_spaces(text):
    text = text.replace(" ", "_")
    text = text.replace("__", "-")
    text = text.strip("_")
    if text.startswith("_") or text.startswith("-"):
        text = "-" + text[1:]
    return text