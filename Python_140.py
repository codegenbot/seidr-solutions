def fix_spaces(text):
    text = text.replace(" ", "_")
    while "__ " in text or "--" in text:
        if "__ " in text:
            text = text.replace("__ ", "_- ")
        elif "--" in text:
            text = text.replace("--", "-")
    return text