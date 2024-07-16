def fix_spaces(text):
    new_text = ""
    previous_space = False
    for char in text:
        if char == " ":
            if not previous_space:
                new_text += "_"
            else:
                new_text += "-"
        else:
            new_text += char
        previous_space = char == " "
    return new_text