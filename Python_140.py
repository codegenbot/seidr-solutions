```
def fix_spaces(text):
    result = ""
    prev_char = None
    for char in text:
        if char == " " and (result[-1] == " " or not result):
            if len(result) > 1 and result[-2] == " ":
                result += "-"
            else:
                result += "_"
        elif char != prev_char:
            result += char
        prev_char = char
    return result