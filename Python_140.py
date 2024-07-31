```
def fix_spaces(text):
    new_text = ""
    for char in text:
        if char == " " and new_text[-1] == " ":
            new_text += "-"
        elif char != " ":
            new_text += char
        else:
            new_text += "_"
    return new_text