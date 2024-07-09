```
def fix_spaces(text):
    previous_char_was_space = False
    result = ""
    for char in text:
        if not previous_char_was_space and char == " ":
            result += "-"
        else:
            result += char
        previous_char_was_space = char == " "
    return result