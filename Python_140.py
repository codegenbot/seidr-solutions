```
def fix_spaces(text):
    new_text = ""
    for i in range(len(text)):
        if text[i] != " " or (i > 0 and text[i - 1] == " "):
            new_text += text[i]
        elif len(new_text) > 0:
            new_text += "-"
        else:
            continue
    return new_text.replace(" ", "_")