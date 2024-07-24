def fix_spaces(text):
    new_text = ""
    for i, char in enumerate(text):
        if char == " ":
            if len(new_text) > 0 and new_text[-1] != " ":
                if not ((new_text[-1].isalnum() or new_text[-1] in ["-", "_"]) 
                        or (len(new_text) == 1 and new_text[0].isalnum()) ):
                    if i < len(text)-1:
                        new_text += "-"
                    else:
                        new_text += " "
                else:
                    new_text += " "
        else:
            new_text += char
    return new_text