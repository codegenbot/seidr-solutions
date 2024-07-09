```
def fix_spaces(text):
    new_text = ""
    for i in range(len(text)):
        if text[i] == " " and (i > 0 and text[i-1] == " " or i < len(text)-1 and text[i+1] == " "):
            new_text += "-"
        elif text[i] != " ":
            new_text += text[i]
        else:
            new_text += "_"
    return new_text