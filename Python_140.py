```
def fix_spaces(text):
    new_text = ""
    add_hyphen = False
    for char in text:
        if char.isalnum():
            new_text += char
            add_hyphen = False
        elif (not new_text or not new_text[-1].isalnum()) and not add_hyphen:
            new_text += "-"
            add_hyphen = True
        elif new_text and new_text[-1].isalnum():
            if not add_hyphen:
                new_text += "_"
                add_hyphen = True
            else:
                new_text += "-"
    return new_text