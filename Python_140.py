def fix_spaces(text):
    result = ''
    consecutive_spaces = 0
    for char in text:
        if char == ' ':
            consecutive_spaces += 1
            if consecutive_spaces > 2:
                result = result.rstrip('_') + '-'
        else:
            consecutive_spaces = 0
        result += '_' if char == ' ' and consecutive_spaces <= 2 else char
    return result