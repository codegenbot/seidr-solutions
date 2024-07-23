```
def fix_spaces(text):
    new_text = ""
    prev_char = ''
    for char in text:
        if char != " " or prev_char != " ":
            new_text += char
        elif new_text and new_text[-1] == "_":
            new_text += "-"
        else:
            new_text += "_"
        prev_char = char
    return new_text