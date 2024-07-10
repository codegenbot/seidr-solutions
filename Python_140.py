def fix_spaces(text):
    new_text = ""
    for i in range(len(text)):
        if text[i] == " " and (i == len(text) - 1 or text[i + 1] == " "):
            if new_text[-1] != "_":
                new_text += "_"
        else:
            new_text += text[i]
    return new_text