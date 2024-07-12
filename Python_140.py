def fix_spaces(text):
    result = ''
    for char in text:
        if char == ' ':
            if len(result) > 0 and result[-1] != ' ':
                result += '-'
            elif result[-1] == ' ':
                continue
            else:
                result += '_'
        else:
            result += char.replace(' ', '_')
    return result