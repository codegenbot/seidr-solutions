def fix_spaces(text):
    text = text.replace(" ", "_")
    while "__" in text or "___" in text:
        text = text.replace("__", "_")
        text = text.replace("___", "-_")
    return text