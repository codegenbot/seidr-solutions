def fix_spaces(text):
    new_text = ""
    for char in text:
        if len(new_text) > 0 and new_text[-1] != " " and char == " ":
            new_text += "_"
        elif char == " ":
            new_text += char
        else:
            new_text += char
    return new_text