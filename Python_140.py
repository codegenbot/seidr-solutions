def fix_spaces(text):
    new_text = ""
    for i in range(len(text)):
        if (
            text[i] == " "
            and (i == 0 or text[i - 1] != " ")
            and (i == len(text) - 1 or text[i + 1] != " ")
        ):
            new_text += "_"
        elif text[i] == " " and (new_text[-1] == "_" or i > 0):
            if new_text[-1] == "_":
                new_text += "-"
            else:
                new_text += "_-"
        else:
            new_text += text[i]
    return new_text