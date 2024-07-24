def fix_spaces(text):
    new_text = ""
    add_hyphen = False
    for char in text:
        if char.isalnum() or char in ["-", "_"]:
            new_text += char
            add_hyphen = False
        elif char.isspace():
            if not add_hyphen:
                new_text += "-"
                add_hyphen = True
            else:
                new_text += " "
        else:
            add_hyphen = False
            new_text += char