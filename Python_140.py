def fix_spaces(text):
    new_text = ""
    add_hyphen = False
    for char in text:
        if char.isalnum():
            new_text += char
            add_hyphen = False
        elif char in ["-", "_"]:
            new_text += char
            add_hyphen = True
        elif char.isspace():
            if add_hyphen:
                new_text += "-"
                add_hyphen = False
            else:
                new_text += " "
        else:
            new_text += "-"
            add_hyphen = True