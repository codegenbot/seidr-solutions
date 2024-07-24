def fix_spaces(text):
    text = text.replace(" ", "_")
    while True:
        if "__" in text or "--" in text:
            text = text.replace("__", "_")
            text = text.replace("--", "-")
        else:
            break
    return text