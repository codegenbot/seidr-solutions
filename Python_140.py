def fix_spaces(text):
    text = text.replace(" ", "_")
    text = text.replace(" ", " ")
    while "__" in text:
        text = text.replace("__", "_-")
    return text