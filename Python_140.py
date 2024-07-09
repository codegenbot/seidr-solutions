def fix_spaces(text):
    result = ""
    previous_was_space = False
    for char in text:
        if char == " " and previous_was_space:
            result += "-"
        else:
            result += char
        previous_was_space = char == " "
    return result