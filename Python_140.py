def fix_spaces(text):
    new_text = ""
    for char in text:
        if char == " ":
            new_text += "_"
        else:
            new_text += char
    return new_text