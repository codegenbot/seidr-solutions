def fix_spaces(text):
    result = ''
    prev_char = ''
    
    for c in text:
        if c == ' ':
            if prev_char != '_':
                result += '_'
        else:
            result += c
        prev_char = c

    return result