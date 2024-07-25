def fix_spaces(text):
    new_text = ""
    prev_was_space = False
    for char in text.replace("\t", ""):
        if char == " ":
            if not prev_was_space: 
                new_text += "_"
            else: 
                new_text += " "
            prev_was_space = True
        elif prev_was_space:
            new_text += "_"
            prev_was_space = False
        else:
            new_text += char
    return new_text