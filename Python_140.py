```
def fix_spaces(text):
    result = ''
    for char in text:
        if char.isspace():
            if len(result) > 0 and result[-1].isspace():
                if '-' == result[-1]:
                    result += '-'
                else:
                    result += '_'
            else:
                result += '_'
        else:
            result += char
    return result