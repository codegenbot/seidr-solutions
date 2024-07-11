```
def fix_spaces(text):
    new_text = ""
    prev_was_space = False
    for char in text:
        if not prev_was_space and char == " ":
            new_text += "-"
            prev_was_space = True
        elif char == " " and prev_was_space:
            if new_text[-1] != "_":
                new_text += "-"
        else:
            new_text += char
            prev_was_space = False
    return new_text