def fix_spaces(text):
    new_text = ""
    for i in range(len(text)):
        if text[i] == " ":
            if i == 0 or (i > 0 and text[i] != " "):
                new_text += "_"
        else:
            new_text += text[i]
    return new_text