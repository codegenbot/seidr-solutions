def fix_spaces(text):
    text += " "
    new_text = ""
    for char in text:
        if char == " " and (new_text[-1] != " " or len(new_text) == 0):
            new_text += "_"
        elif char == " " and new_text[-1] == " ":
            new_text += "-"
        else:
            new_text += char
    return new_text.rstrip()