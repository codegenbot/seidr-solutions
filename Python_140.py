```Python
def fix_spaces(text):
    new_text = ""
    prev_was_non_space = False
    for char in text:
        if not prev_was_non_space and char == " ":
            new_text += "_"
            prev_was_non_space = True
        elif char == " " and prev_was_non_space:
            new_text += "-"
            prev_was_non_space = True
        else:
            new_text += char
            prev_was_non_space = not char.isspace()
    return new_text