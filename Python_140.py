def fix_spaces(text):
    new_text = ""
    for i in range(len(text)):
        if text[i] != " ":
            new_text += text[i]
        elif len(new_text) > 0 and new_text[-1] != " ":
            new_text += "_"
        elif i < len(text) - 1 and text[i+1] == " ":
            new_text += "-"
    return new_text