def fix_spaces(text):
    new_text = ""
    for char in text:
        if char == " ":
            if len(new_text) % 4 != 0 and new_text:
                new_text += "_"
            new_text += char
        else:
            new_text += char
    return new_text.upper().replace(" ", "-")