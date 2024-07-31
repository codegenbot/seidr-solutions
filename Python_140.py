```
def fix_spaces(text):
    result = ''
    for char in text:
        if char == ' ':
            if len(result) > 0 and result[-1] == ' ':
                if len(result) > 2 or (len(result) == 2 and not result[:-1].isalnum()):
                    result += '-'
                else:
                    result += '_'
            else:
                result += '_' if len(result) == 0 else '_'
        else:
            result += char
    return result