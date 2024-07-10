def fix_spaces(text):
    text += " "
    new_text = ""
    for i in range(len(text) - 1):
        if text[i] != " " and text[i + 1] != " ":
            new_text += text[i]
        elif new_text[-1] == " " or not new_text:
            new_text += text[i]
        else:
            if len(new_text) > 2:
                new_text += "-"
            else:
                new_text += "_"
    return new_text