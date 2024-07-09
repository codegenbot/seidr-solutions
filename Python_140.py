def fix_spaces(text):
    previous_char_was_space = False
    result = ""
    for char in text:
        if char != " " or not previous_char_was_space:
            result += char
        else:
            result += "-"
        previous_char_was_space = char == " "
    return result