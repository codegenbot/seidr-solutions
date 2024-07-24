def fix_spaces(text):
    new_text = ""
    add_hyphen = False
    for char in text:
        if char.isalnum() or char in ["-", "_"]:
            new_text += char
        elif char == " " and not add_hyphen:
            new_text += "-"
            add_hyphen = True
        elif char == " ":
            new_text += "-"
            add_hyphen = True
    return new_text