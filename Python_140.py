def fix_spaces(text):
    text += " "
    new_text = ""
    i = 0
    while i < len(text):
        if text[i] != " ":
            new_text += text[i]
        elif len(new_text) > 0 and new_text[-1] == " ":
            new_text += "-"
        else:
            new_text += "_"
        i += 1
    return new_text