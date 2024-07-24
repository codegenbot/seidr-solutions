def fix_spaces(text):
    text = text.strip().replace(" ", "_")
    while "__" in text:
        text = text.replace("__", "_-")
    return text