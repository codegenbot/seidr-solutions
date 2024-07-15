```
def fix_spaces(text):
    new_text = ""
    for char in text:
        if char != " " or new_text[-1] != " ":
            new_text += char
        elif len(new_text) > 1 and new_text[-2] != " ":
            new_text += "-"
        else:
            new_text += "_"
    return new_text