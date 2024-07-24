```
def fix_spaces(text):
    while "  " in text:
        text = text.replace("  ", " ")
    text = text.replace(" ", "_")
    while "--" in text or "---" in text or "----" in text:
        text = text.replace("--", "-")
        text = text.replace("---", "-")
        text = text.replace("----", "-")
    return text