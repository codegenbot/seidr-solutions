```
def fix_spaces(text):
    text = text.strip().replace("  ", " ")
    return text.replace(" ", "_").replace("--", "-")