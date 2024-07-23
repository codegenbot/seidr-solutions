def fix_spaces(text):
    new_text = ""
    i = 0
    while i < len(text):
        if text[i] == " ":
            if i + 1 < len(text) and text[i + 1] == " ":
                new_text += "-"
            elif i > 0 and text[i - 1] == " ":
                new_text += "_"
            else:
                continue
        else:
            new_text += text[i]
        i += 1
    return new_text