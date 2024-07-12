```
def fix_spaces(text):
    text += ' '
    new_text = ''
    count = 0
    for char in text:
        if char != ' ':
            new_text += char
            count = 0
        elif count == 0:
            new_text += '_'
        elif count == 1:
            new_text += '-'
        else:
            new_text += ' '
        count += (char == ' ')
    return new_text.strip()