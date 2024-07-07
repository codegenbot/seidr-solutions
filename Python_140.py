def fix_spaces(text):
    text += " "
    new_text = ""
    count = 0
    for char in text:
        if char == " ":
            if count > 2:
                new_text += "-"
            else:
                new_text += "_"
            count = 0
        else:
            new_text += char
            count += 1
    return new_text.strip()