def fix_spaces(text):
    new_text = ""
    prev_was_space = False
    for char in text:
        if not prev_was_space and char == " ":
            new_text += "_"
            prev_was_space = True
        elif char == " ":
            new_text += "-"
            prev_was_space = True
        else:
            if prev_was_space:
                new_text += " "
                prev_was_space = False
            new_text += char
    return new_text