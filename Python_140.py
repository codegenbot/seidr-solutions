def fix_spaces(text):
    new_text = ""
    for char in text:
        if char == " " and new_text != "":
            if len(new_text) > 2 or (new_text[-1] == "-" and new_text.count(" ") > 0):
                new_text += "-"
            else:
                new_text += "_"
        elif char == " " and new_text == "":
            new_text += "_"
        else:
            new_text += char
    return new_text