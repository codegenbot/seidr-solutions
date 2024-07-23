def fix_spaces(text):
    text += " "
    new_text = ""
    i = 0
    while i < len(text):
        if text[i] == " ":
            if i + 1 < len(text) and text[i + 1] == " ":
                new_text += "-"
            else:
                new_text += "_"
        else:
            new_text += text[i]
        i += 1
    return new_text