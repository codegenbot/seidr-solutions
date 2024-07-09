def fix_spaces(text):
    result = ""
    previous_char_was_space = True
    for char in text + " ":  
        if char != " " or not previous_char_was_space:
            result += char
        elif previous_char_was_space:
            result += "-"
        previous_char_was_space = char == " "
    return result.strip()