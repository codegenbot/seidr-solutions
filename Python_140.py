def replace_spaces_with_underscores(text):
    new_text = ''
    for char in text:
        if char == ' ':
            if len(new_text) > 0 and new_text[-1] != '_':
                new_text += '-'
            else:
                new_text += '_'
        else:
            new_text += char
    return new_text