def fix_spaces(text):
    new_text = ""
    for i in range(len(text)):
        if i > 0 and text[i] == " " and text[i - 1] == " ":
            if len(new_text) > 2 or new_text[-1] != "-":
                new_text += "-"
        else:
            new_text += text[i].replace(" ", "_")
    return new_text