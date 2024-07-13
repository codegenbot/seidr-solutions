def fix_spaces(text):
    result = ''
    consecutive_spaces = 0
    for char in text:
        if char == ' ':
            consecutive_spaces += 1
            if consecutive_spaces > 2:
                result = result.rstrip('_') + '-'
        else:
            result += '_' * consecutive_spaces + char
            consecutive_spaces = 0
    return result.rstrip('_')