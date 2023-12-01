def fix_spaces(text):
    text = text.replace(" ", "_")
    new_text = ""
    count = 0
    for char in text:
        if char == "_":
            new_text += char
            count = 0
        elif char == " ":
            count += 1
            if count > 2:
                new_text += "-"
            else:
                new_text += "_"
        else:
            new_text += char
            count = 0
    return new_text