```
def fix_spaces(text):
    new_text = ""
    for char in text:
        if char == " ":
            if new_text and new_text[-1] != " ":
                new_text += "_"
            elif len(new_text) > 2 and new_text[-1] == " " and new_text[-2] == " ":
                new_text = new_text[:-1]
                new_text += "-"
        else:
            new_text += char
    return new_text