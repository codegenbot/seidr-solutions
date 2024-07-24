```
def fix_spaces(text):
    new_text = ""
    prev_char_was_space = False
    for char in text:
        if char == " ":
            if not prev_char_was_space:
                new_text += "-"
            else:
                new_text += " "
            prev_char_was_space = True
        else:
            new_text += char
            prev_char_was_space = False
    return new_text