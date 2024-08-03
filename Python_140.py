```
def fix_spaces(text):
    return "-".join(text.split()) if " " in text else text.replace(" ", "_")