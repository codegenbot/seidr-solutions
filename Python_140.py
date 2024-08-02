def fix_spaces(text):
    result = ''
    prev_space = False
    for c in text:
        if c == ' ':
            if not prev_space:
                result += '_'
            prev_space = True
        else:
            result += c
            prev_space = False
    return result