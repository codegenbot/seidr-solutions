def fix_spaces(text):
    new_text = ""
    for i in range(len(text)):
        if text[i] == " ":
            if i == len(text) - 1 or text[i + 1] != " ":
                new_text += "_"
            else:
                temp = "_-"
                while i < len(text) and text[i] == " ":
                    i += 1
                new_text += temp
        else:
            new_text += text[i]
    return new_text