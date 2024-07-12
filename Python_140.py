def fix_spaces(text):
    new_text = ""
    for i in range(len(text)):
        if text[i] == " ":
            if i > 0 and text[i - 1] == " ":
                if len(new_text) > 0:
                    new_text += "-"
            else:
                new_text += "_"
        else:
            new_text += text[i]
    return new_text