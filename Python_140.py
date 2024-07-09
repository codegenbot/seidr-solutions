def fix_spaces(text):
    result = ""
    for char in text:
        if char != " " or not previous_char_was_space:
            result += char
        else:
            result += "-"
        previous_char_was_space = char == " "
    return result