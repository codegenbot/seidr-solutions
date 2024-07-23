def fix_spaces(text):
    new_text = ""
    for i in range(len(text)):
        if text[i] != " ":
            new_text += text[i]
        elif i > 0 and text[i - 1] == " ":
            new_text += "_"
        else:
            new_text += "-"
    return new_text