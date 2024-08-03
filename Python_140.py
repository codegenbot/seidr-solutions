```
def fix_spaces(text):
    text = text.replace(" ", "_")
    text = text.replace("-", "_-")
    while "-_" in text:
        text = text.replace("-_", "-")
    return text