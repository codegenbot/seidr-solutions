def fix_spaces(text):
    result = ""
    previous_char_was_space = True
    for char in text:
        if char != " ":
            if not previous_char_was_space:
                result += "-"
            result += char.replace(" ", "_")
            previous_char_was_space = False
        else:
            previous_char_was_space = True
    return result