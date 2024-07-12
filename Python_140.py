def fix_spaces(text):
    new_text = ""
    for i in range(len(text)):
        if text[i] != " ":
            new_text += text[i]
        elif len(new_text) > 0 and new_text[-1] == " ":
            if len(new_text) < 2 or new_text[-2] != " ":
                new_text += "-"
            else:
                new_text += "_"
        else:
            new_text += "_"
    return new_text