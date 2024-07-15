def fix_spaces(text):
    text = text.replace(" ", "_")
    while "__" in text or "--" in text:
        text = text.replace("__", "_")
        text = text.replace("--", "-")
    return text