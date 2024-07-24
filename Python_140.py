def fix_spaces(text):
    new_text = ""
    add_hyphen = False
    for char in text.strip():
        if char.isalnum() or char in ["-", "_"]:
            new_text += char
            add_hyphen = False
        elif char == " ":
            if not add_hyphen:
                new_text += "-"
                add_hyphen = True
            else:
                new_text += " "
    return new_text