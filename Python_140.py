```
def fix_spaces(text):
    text = text.strip().replace(" ", "_").replace("--", "-")
    return text