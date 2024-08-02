```
def fix_spaces(text):
    new_text = ""
    for i in range(len(text)):
        if text[i] == " ":
            if i > 0 and new_text[-1] == " ":
                new_text += "_"
            else:
                new_text += "_"
        else:
            new_text += text[i]
    return new_text