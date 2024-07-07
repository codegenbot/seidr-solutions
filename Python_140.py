def fix_spaces(text):
    new_text = ""
    for i in range(len(text)):
        if text[i] == " " and (i == len(text) - 1 or text[i + 1] != " "):
            new_text += "_"
        elif text[i : i + 3] == "   ":
            new_text += "-"
        else:
            new_text += text[i]
    return new_text