```
def fix_spaces(text):
    text = "".join("_" if char.isspace() else char for char in text)
    return text