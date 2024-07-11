```
def fix_spaces(text):
    result = ''
    count = 0
    for char in text:
        if char == ' ':
            count += 1
            if count > 2:
                result += '-'
            else:
                result += '_'
        else:
            result += char
            count = 0
    return result