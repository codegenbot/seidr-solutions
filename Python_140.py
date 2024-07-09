def fix_spaces(text):
    new_text = ""
    for i in range(len(text)):
        if i > 0 and text[i] == " " and text[i - 1] == " ":
            new_text += "-"
        elif text[i] != " ":
            new_text += text[i]
        else:
            new_text += "_"
    return new_text