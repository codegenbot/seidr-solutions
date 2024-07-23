def fix_spaces(text):
    text = text.replace(" ", "_")
    while "__ " in text or " __" in text:
        text = text.replace("__ ", "_- ")
        text = text.replace(" __", "_- ")
    return text