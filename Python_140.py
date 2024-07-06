```
def fix_spaces(text):
    result = ''
    for char in text:
        if char == ' ' and (result == '' or len(result) > 2):
            result += '-'
        elif char == ' ':
            result += '_'
        else:
            result += char
    return result