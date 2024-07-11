def fix_spaces(text):
    text = text.replace("   ", " ")
    while " " in text and "__" in text:
        text = text.replace(" ", "_")
        text = text.replace("__", "_-")
    return text