```
def fix_spaces(text):
    new_text = ""
    add_hyphen = False
    for char in text:
        if char.isalnum() or char in ["-", "_"]:
            new_text += char
            add_hyphen = False
        elif char.isspace():
            if len(new_text) > 0 and not add_hyphen:
                new_text += "-"
            else:
                new_text += " "
            add_hyphen = False
        else:
            new_text += "-"
            add_hyphen = True
    return new_text