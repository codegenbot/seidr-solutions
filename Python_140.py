def fix_spaces(text):
    new_text = ""
    for char in text:
        if char == " ":
            if len(new_text) > 0 and (not new_text[-1].isalnum() and not new_text[-1] in ["-", "_"]):
                if new_text[-1] != " ":
                    if new_text[-1]:
                        new_text += "-"
                    else:
                        new_text += " "
                else:
                    new_text += " "
            else:
                new_text += char
        else:
            new_text += char
    return new_text