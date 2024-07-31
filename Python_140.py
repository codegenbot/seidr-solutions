```
def fix_spaces(text):
    result = ''
    prev_char = ''
    for char in text:
        if char == ' ' and prev_char == ' ':
            result += '-'
        elif char == ' ':
            result += '_'
        else:
            result += char
        prev_char = char
    return result