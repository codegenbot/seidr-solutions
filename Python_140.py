```
def fix_spaces(text):
    text = text.replace(" ", "_")
    while "__ " in text or " _" in text:
        text = text.replace("__ ", "- ")
        text = text.replace(" _ ", "- ")
    return text.replace("_ ", "_-")