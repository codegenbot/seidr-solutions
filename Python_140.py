def fix_spaces(text):
    if text[0].isspace():
        result = '-' if text[0] == ' ' else '_'
    else:
        result = ''
    prev_was_space = True
    for char in text[1:]:
        if char.isspace():
            if not prev_was_space:
                result += '-'
            else:
                result += '_'
            prev_was_space = True
        else:
            result += char
            prev_was_space = False
    return result