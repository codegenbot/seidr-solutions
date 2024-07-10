def fix_spaces(text):
    new_text = ""
    for char in text:
        if char != " " or new_text.endswith(" "):
            new_text += char
        elif new_text.endswith("-"):
            new_text += "-"
        else:
            new_text += "-"
    return new_text