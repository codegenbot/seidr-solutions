```
def fix_spaces(text):
    new_text = ''
    for char in text:
        if char == ' ':
            if new_text and not new_text.endswith('-'):
                new_text += '-'
            else:
                new_text += '_'
        else:
            new_text += char
    return new_text