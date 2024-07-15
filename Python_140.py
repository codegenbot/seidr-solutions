```
def fix_spaces(text):
    result = ''
    for char in text:
        if char != ' ' or result.endswith(' ') or len(result) > 2:
            result += char
        else:
            if result:
                result += '-'
            else:
                result += '_'
    return result