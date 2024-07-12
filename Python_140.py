def fix_spaces(text):
    new_text = ""
    for i in range(len(text) - 1):
        if text[i] == " " and text[i + 1] == " ":
            new_text += "-"
        elif text[i] != " ":
            new_text += text[i]
        else:
            new_text += "_"
    new_text += text[-1]
    return new_text