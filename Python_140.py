```
def fix_spaces(text):
    result = ''
    for i in range(len(text)):
        if i > 0 and text[i] == ' ' and text[i - 1] == ' ':
            if len(result) > 0 and result[-1] != '-':
                result += '-'
        elif text[i] == ' ':
            result += '_'
        else:
            result += text[i]
    return result