def fix_spaces(text):
    text = text.replace(" ", "_")
    while "__" in text:
        text = text.replace("__", "-")
    return text.replace("-", "__").replace("_", " ", 1).replace(" ", "_", 1).replace("__", "-")