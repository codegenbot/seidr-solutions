```
def fix_spaces(text):
    result = ''
    prev_was_space = True
    for char in text:
        if char.isspace():
            if prev_was_space:
                result += '_'
            else:
                result += '-'
            prev_was_space = True
        else:
            result += char
            prev_was_space = False
    return result