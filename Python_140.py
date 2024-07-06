```
def fix_spaces(text):
    text = text.strip()
    while "  " in text or " " in text:
        if "  " in text:
            text = text.replace("  ", " ")
        else:
            text = text.replace(" ", "")
    return text.replace(" ", "_").replace("__", "_")