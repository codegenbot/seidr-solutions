```
def fix_spaces(text):
    new_text = ""
    for char in text:
        if char == " ":
            if len(new_text) > 0 and new_text[-1] == "_":
                new_text += char
            else:
                new_text += new_text[-1].replace(" ", "_") if new_text else "_"
        else:
            new_text += char
    return new_text