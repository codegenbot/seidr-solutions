def fix_spaces(text):
    text += " "
    new_text = ""
    for i in range(len(text)):
        if text[i] != " " or (
            new_text.endswith(" ") and len(new_text) > 1 and new_text[-2] == " "
        ):
            new_text += text[i]
        elif len(new_text) > 1:
            new_text += "-"
    return new_text.strip()