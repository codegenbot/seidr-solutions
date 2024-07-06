```
def fix_spaces(text):
    new_text = ""
    for i in range(len(text)):
        if text[i] == " ":
            and (i < len(text) - 1 or i == len(text) - 1):
                new_text += "-"
            else:
                new_text += "_"
        else:
            new_text += text[i]
    return new_text