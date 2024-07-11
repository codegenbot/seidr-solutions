```
def fix_spaces(text):
    new_text = ""
    is_prev_space = False
    for char in text:
        if not is_prev_space and char == " ":
            new_text += "_"
            is_prev_space = True
        elif char == " " and is_prev_space:
            new_text += "-"
            is_prev_space = True
        else:
            new_text += char
            is_prev_space = False
    return new_text