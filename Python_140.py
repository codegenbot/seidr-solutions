def fix_spaces(text):
    new_text = ""
    add_hyphen = False
    for char in text:
        if char.isalnum() or char in ["-", "_"] and not new_text:
            new_text += char
        elif char == " " and not add_hyphen:
            new_text += "-"
            add_hyphen = True
        elif add_hyphen and char == " ":
            new_text += "-"
    return new_text