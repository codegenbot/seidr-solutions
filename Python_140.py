def fix_spaces(text):
    prev_was_space = text.isspace()
    result = ''
    for char in text + ' ':  
        if char.isspace():
            if not prev_was_space:
                result += '_'
            else:
                result += '-'
            prev_was_space = True
        else:
            result += char
            prev_was_space = False
    return result