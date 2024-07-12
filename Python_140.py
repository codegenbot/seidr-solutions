```
def fix_spaces(text):
    new_text = ""
    prev_space = False
    for char in text:
        if char.isspace():
            if not prev_space:
                new_text += "_"
                prev_space = True
            elif prev_space:
                new_text += "-"
                prev_space = False
        else:
            new_text += char
            prev_space = False
    return new_text