```
def fix_spaces(text):
    text = text.replace("  ", " ")
    new_text = ""
    i = 0
    while i < len(text):
        if text[i] != " ":
            new_text += text[i]
        else:
            if i + 1 < len(text) and text[i + 1] == " ":
                new_text += "-"
            else:
                new_text += "_"
        i += 1
    return new_text