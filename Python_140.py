```
def fix_spaces(text):
    text = text.replace(" ", "_")
    while "__" in text:
        text = text.replace("__", "_")
    while "___" in text:
        text = text.replace("___", "-_")
    return text.strip()