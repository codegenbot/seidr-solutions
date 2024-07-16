def fix_spaces(text):
    result = ""
    prev_char_was_space = False
    for char in text:
        if char.isspace():
            if not prev_char_was_space:
                result += "_"
            else:
                result += " "
            prev_char_was_space = True
        else:
            result += char
            prev_char_was_space = False
    return result