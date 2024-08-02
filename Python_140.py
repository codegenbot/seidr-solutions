def fix_spaces(text):
    result = ""
    prev_char = None
    for char in text:
        if char != ' ' or prev_char == ' ' and prev_char != '\n':
            if prev_char == ' ' and result.endswith(' '):
                result += '-'
            else:
                result += char.replace(' ', '_')
        else:
            prev_char = char
        prev_char = char
    return result