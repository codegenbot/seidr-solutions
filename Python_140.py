def fix_spaces(text):
    new_text = ""
    prev_was_space = False
    for i, char in enumerate(text):
        if char == " " and (i == len(text) - 1 or not text[i+1].isspace()):
            new_text += "_"
        else:
            new_text += char
        prev_was_space = char == " "
    return new_text