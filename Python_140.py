```
def fix_spaces(text):
    if text is None or not text.strip():
        return ""
    text = text.replace(" ", "_")
    while "__ " in text or "__" in text:
        text = text.replace("__ ", "_- ")
        text = text.replace("--", "-")
    return text