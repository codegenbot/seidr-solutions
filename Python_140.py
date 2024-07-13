```
def fix_spaces(text):
    result = ""
    for char in text:
        if char != ' ' or not result.endswith(' '):
            result += char
        elif len(result) > 2 and result[-3] == ' ':
            result += '-'
        else:
            result += '_'
    return result