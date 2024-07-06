```
def fix_spaces(text):
    result = ''
    for char in text:
        if char.isspace():
            if char.isspace() and (len(result) > 0 and not result[-1].isspace()):
                if len(result) == 1 or not result[-1].isspace():
                    result += '-'
                else:
                    result += '_'
            else:
                result += '_'
        else:
            result += char
    return result