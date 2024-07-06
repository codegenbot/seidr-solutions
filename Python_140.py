```
def fix_spaces(text):
    result = ''
    for char in text:
        if char == ' ' and (len(result) > 0 and result[-1] != ' ') or len(result) == 0:
            result += '_'
        else:
            result += char
    return result.replace('  ', '-').replace('__', '_')