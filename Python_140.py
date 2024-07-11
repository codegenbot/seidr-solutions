```
def fix_spaces(text):
    text = text.replace(" +", " ")
    while " " in text and ".." not in text:
        text = text.replace("  ", " ")
    text = text.replace(" ", "_")
    while "__" in text:
        text = text.replace("__", "_-")
    return text