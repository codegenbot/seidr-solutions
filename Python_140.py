def fix_spaces(text):
    new_text = ""
    prev_space = False
    for char in text:
        if char == " " and not prev_space:
            new_text += "- "
            prev_space = True
        elif char != " ":
            new_text += char
            prev_space = False
        else:
            new_text += "_"
    return new_text