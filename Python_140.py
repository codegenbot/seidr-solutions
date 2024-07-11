```
def fix_spaces(text):
    new_text = ""
    i = 0
    while i < len(text):
        if text[i] == " ":
            if i < len(text) - 1 and text[i + 1] == " ":
                if i < len(text) - 2 or text[i + 2] != " ":
                    new_text += "-"
                else:
                    new_text += "-"
                    while i < len(text) - 1 and text[i + 1] == " ":
                        i += 1
            else:
                new_text += "_"
        else:
            new_text += text[i]
        i += 1
    return new_text