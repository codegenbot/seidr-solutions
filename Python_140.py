def fix_spaces(text):
    result = ''
    count = 0
    
    for char in text:
        if char == ' ':
            count += 1
            if count <= 2:
                result += '_'
            else:
                result = result[:-1] + '-'
        else:
            count = 0
            result += char

    return result