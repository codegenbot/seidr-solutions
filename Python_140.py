```
def fix_spaces(text):
    result = ''
    for char in text:
        if char == ' ':
            if len(result) < 2:
                result += '_'
            else:
                result += ' '
        else:
            result += char
    return result