```
def fix_spaces(text):
    result = ''
    for char in text:
        if char == ' ':
            if len(result) > 0 and result[-1] == ' ':
                continue
            elif len(result) < 20:
                result += '_'
            else:
                result += '-'
        else:
            result += char
    return result