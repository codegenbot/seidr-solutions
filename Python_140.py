```
def fix_spaces(text):
    text = text.replace(" ", "_").strip()
    while "__" in text and "--" in text:
        text = text.replace("__", "-").replace("--", "-")
    return text