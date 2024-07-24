```
def fix_spaces(text):
    new_text = ""
    add_hyphen = False
    for char in text:
        if char.isalnum():
            new_text += char
            add_hyphen = False
        elif not new_text:
            new_text += "-"
        else:
            if char != "-":
                new_text += "_"
            else:
                new_text += char
    return new_text + ("" if not new_text or new_text[-1].isalnum() else "_")