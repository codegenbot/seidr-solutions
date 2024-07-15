def fix_spaces(text):
    new_text = ''
    for char in text:
        if char != ' ':
            new_text += char
        elif new_text[-1] == ' ':
            new_text += '_'
        else:
            new_text += '-' + '_'
    return new_text