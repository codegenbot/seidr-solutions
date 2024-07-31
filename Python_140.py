def fix_spaces(text):
    new_text = ""
    for i in range(len(text)):
        if i > 0 and text[i - 1] == " ":
            if new_text[-1] != "-":
                new_text += "-"
        else:
            new_text += text[i].replace(" ", "_")
    return new_text