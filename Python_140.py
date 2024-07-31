def fix_spaces(text):
    result = ''
    for char in text:
        if char != ' ' or not (result.endswith(' ') and result.count(' ') > 1):
            result += char if char != ' ' else '_'
        elif result.count(' ') <= 1:
            result += '-'
    return result