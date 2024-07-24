def fix_spaces(text):
    new_text = ""
    add_hyphen = False
    for char in text:
        if char.isspace():
            if not add_hyphen:
                new_text += "-"
                add_hyphen = True
            else:
                new_text += " "
                add_hyphen = False
        elif char.isalnum() or char in ["-", "_"]:
            if not add_hyphen and char.isspace():
                new_text += "-"
                add_hyphen = True
            else:
                new_text += char
                add_hyphen = False
        else:
            new_text += char
    if not text.strip().endswith("-"):
        new_text += "-"

    return new_text