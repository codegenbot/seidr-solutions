def fix_spaces(text):
    text = text.replace(" ", "_")
    while "_" in text and "--" not in text:
        text = text.replace("___", "-")
        text = text.replace("_  ", "_-")
        text = text.replace(" _ ", "_-")
        text = text.replace("_   ", "_--")
    return text