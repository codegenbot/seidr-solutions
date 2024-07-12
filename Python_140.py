def fix_spaces(text):
    text = text.replace(" ", "_")
    while "__ " in text or "____" in text:
        if "__ " in text:
            text = text.replace("__ ", "_-")
        else:
            text = text.replace("____", "-")
    return text