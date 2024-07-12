def fix_spaces(text):
    result = ''
    for char in text.replace(' ',=''):
        if char == ' ' and len(result) > 0 and result[-1] != ' ':
            result += '-'
        elif char == ' ':
            continue
        else:
            result += char if char != ' ' else '_'