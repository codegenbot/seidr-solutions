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
        elif char.isspace() or (char.isspace() and not add_hyphen):
            if char.isspace():
                if len(new_text) > 0 or add_hyphen:
                    new_text += "-"
                else:
                    new_text += " "
                add_hyphen = True
            else:
                new_text += "-"
                add_hyphen = True
        else:
            new_text += "-"
            add_hyphen = True
    return new_text