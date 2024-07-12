```
def fix_spaces(text):
    result = ""
    prev_char_was_space = False
    for char in text:
        if char != " " or not prev_char_was_space:
            result += char if char == " " else "_"
            prev_char_was_space = char == " "
        elif result[-1] != "-":
            result += "-"
        prev_char_was_space = True
    return result