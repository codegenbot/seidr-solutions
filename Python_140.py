def fix_spaces(text):
    if text is not None and text.strip() != "":
        text = text.strip().replace(" ", "_")
        while "__" in text:
            text = text.replace("__", "_-")
    else:
        text = ""
    return text