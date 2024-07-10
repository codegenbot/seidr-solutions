```
def fix_spaces(text):
    new_text = ""
    for char in text:
        if char == " " and new_text.endswith(" ") and len(new_text) > 1:
            new_text += "-"
        elif char == " " and new_text.endswith("_"):
            new_text += "_"
        else:
            new_text += "_" if new_text.endswith(" ") else char
    return new_text[1:]