def fix_spaces(text):
    text = text.replace(" " , "_")
    while "__" in text and "--" in text:
        text = text.replace(" _", "_").replace("--", "-")
        text = text.replace("__", "-").replace("---", "-")
        text = text.replace("_", "")
    return text