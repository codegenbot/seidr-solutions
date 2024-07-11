def fix_spaces(text):
    new_text = ""
    prev_was_space = False
    for char in text:
        if not prev_was_space and (char.isspace() or char == '\n' or char == '\t'):
            new_text += "_"
            prev_was_space = True
        elif (char.isspace() or char == '\n' or char == '\t') and prev_was_space:
            new_text += "-"
            prev_was_space = True
        else:
            new_text += char
            prev_was_space = False if not (char.isspace() or char == '\n' or char == '\t') else True
    return new_text