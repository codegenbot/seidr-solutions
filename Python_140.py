```
def fix_spaces(text):
    while " " in text:
        text = text.replace(" ", "_")
    return text