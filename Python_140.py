```
def fix_spaces(text):
    new_text = ""
    if text[0] == " ":
        new_text += "-"
    for i in range(len(text)):
        if text[i] == " ":
            if i < len(text) - 1 and text[i + 1] == " ":
                if i < len(text) - 2 or text[i + 2] != " ":
                    new_text += "-"
                else:
                    new_text += " "
            else:
                new_text += "_"
        else:
            new_text += text[i]
    if text[-1] == " ":
        new_text += "-"
    return new_text