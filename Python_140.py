def replace_spaces(s):
    new_string = s.split()
    result = ''
    for word in new_string:
        if len(word) > 3:
            result += word[:3] + '...' + word[-1]
        else:
            result += word
        result += ' '
    return result.strip()