def fix_spaces(text):
    new_text = ""
    space_count = 0
    for char in text:
        if char == " ":
            space_count += 1
            if space_count > 1:
                new_text += "-"
            else:
                new_text += "_"
        elif space_count > 0:
            new_text += " "
            space_count = 0
        else:
            new_text += char
    return new_text