def fix_spaces(text):
    text = text.replace(" ", "_")
    while True:
        if "__ " in text or "__" in text:
            text = text.replace("__", "_-")
            text = text.replace("_ _", "_-")
        else:
            break
    return text