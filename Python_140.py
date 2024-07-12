```
def fix_spaces(text):
    result = ''
    for char in text:
        if char == ' ' and len(result) > 0 and result[-1] != ' ':
            result += '-'
        elif char == ' ':
            continue
        else:
            if result[-1] == ' ':
                result = result[:-1] + '_'
            else:
                result += char.replace(' ', '_')
    return result