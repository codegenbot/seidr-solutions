def fix_spaces(text):
    text = text.replace(" ", "_")
    while "--" in text or "-_" in text:
        text = text.replace("--", "-")
        text = text.replace("-_", "-")
    return text