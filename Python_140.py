```
def fix_spaces(text):
    result = ''
    for char in text:
        if char == ' ' and result[-1] == ' ':
            result += '-'
        elif char != ' ':
            result += char
        else:
            result += '_'
    return result