```
def fix_spaces(text):
    result = ''
    for char in text:
        if char != ' ' or result[-1] != ' ':
            result += char
        elif len(result) > 2 and result[-1] == '-' and result[-2] == '_':
            continue
        else:
            if len(result) < 2:
                result += '-'
            else:
                result = result[:-1] + '-'
    return result.replace(' ', '_')