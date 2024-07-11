```
def fix_spaces(text):
    new_text = ""
    for i in range(len(text)):
        if text[i] == " ":
            if i < len(text) - 1 and text[i+1] == " ":
                if new_text and new_text[-1] != "-":
                    new_text += "-"
                continue
            if not new_text or new_text[-1] != "_":
                new_text += "_"
            else:
                new_text += " "
        else:
            new_text += text[i]
    return new_text