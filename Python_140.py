def fix_spaces(text):
    new_text = ""
    add_hyphen = False
    for char in text:
        if char.isalnum():
            new_text += char
            add_hyphen = False
        elif char in ["-", "_"]:
            if not add_hyphen:
                new_text += "-"
                add_hyphen = True
            else:
                new_text += char
        elif char.isspace():
            if add_hyphen:
                new_text += "-"
                add_hyphen = False
            else:
                new_text += " "
        else:
            if not add_hyphen and char != ' ':
                new_text += "-"
                add_hyphen = True