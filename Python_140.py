```
def fix_spaces(text):
    result = ''
    i = 0
    while i < len(text):
        if text[i] != ' ':
            result += text[i]
        elif result and result[-1] == ' ':
            result += '-'
        else:
            result += '_'
        j = i + 1
        while j < len(text) and text[j] == ' ':
            j += 1
        i = j
    return result