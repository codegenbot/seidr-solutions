def fix_spaces(text):
    text = text.replace(" ", "_")
    while True:
        if "__" in text:
            text = text.replace("__", "_-")
        else:
            break
    return text