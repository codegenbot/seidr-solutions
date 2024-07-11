```
def fix_spaces(text):
    text = text.strip().replace(" ", "_")
    while "__ " in text or " _" in text:
        text = text.replace("__ ", "- ")
        text = text.replace(" _ ", "- ")
    return text