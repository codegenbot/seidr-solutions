def fix_spaces(text):
    text = text.replace(" ", "_").lower()
    while "__" in text:
        text = text.replace("__", "_-")
    return text