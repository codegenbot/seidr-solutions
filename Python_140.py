def fix_spaces(text):
    text = text.replace(" ", "_")
    while "__" in text or "--" in text:
        if "--" in text:
            text = text.replace("--", "-")
        else:
            text = text.replace("__", "_")
    return text