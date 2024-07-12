def fix_spaces(text):
    text = text.replace(" ", "_")
    while "__" in text:
        text = text.replace("__", "_-")
    text = text.replace("_-_","_")
    return text