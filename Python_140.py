def fix_spaces(text):
    text = text.replace(" ", "_")
    while "__" in text:
        text = text.strip().replace("__", "_-")
    return text