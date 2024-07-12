def fix_spaces(text):
    result = ""
    prev_char_was_space = False
    for char in text:
        if char != " " or not prev_char_was_space:
            result += char
            prev_char_was_space = char == " "
        elif prev_char_was_space:
            result += "-"
            prev_char_was_space = False
        else:
            prev_char_was_space = True
    return result