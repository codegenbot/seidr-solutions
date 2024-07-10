```
def fix_spaces(text):
    text += ' '
    new_text = ''
    for char in text:
        if char == ' ' and new_text != '':
            if len(new_text) < 2:
                new_text += '_'
            else:
                new_text += '-'
        elif char != ' ':
            new_text += char
    return new_text.strip()