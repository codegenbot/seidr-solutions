def fix_spaces(text):
    new_text = ""
    prev_was_space = False
    for char in text:
        if char == " " and (text.index(char) == len(text) - 1 or not text[text.index(char)+1].isspace()):
            new_text += "_"
        else:
            new_text += char
        if char == " ":
            prev_was_space = True
        else:
            prev_was_space = False
    return new_text