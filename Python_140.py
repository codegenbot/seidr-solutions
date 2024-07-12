def fix_spaces(text):
    new_text = ''
    for char in text:
        if char == ' ':
            if not new_text or new_text[-1] != '_':
                new_text += '_'
        else:
            new_text += char
    return new_text