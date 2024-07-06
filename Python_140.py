```
def fix_spaces(text):
    result = ''
    prev_was_space = True
    for char in text:
        if not char.isspace():
            result += char
            prev_was_space = False
        else:
            if not prev_was_space:
                result += '-'
            else:
                result += '_'
            prev_was_space = True
    return result