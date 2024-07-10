def fix_spaces(text):
    text = text.replace(" ", "_")
    while "--" in text or "___" in text:
        text = text.replace("--", "-")
        text = text.replace("___", "-")
    return text