def fix_spaces(text):
    new_text = ''
    for char in text:
        if not char.isspace():
            new_text += char if not new_text else '_'
        else:
            new_text += ' '
    return new_text.strip().replace(" ", "_")