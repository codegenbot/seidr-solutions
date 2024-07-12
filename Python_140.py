```
def fix_spaces(text):
    new_text = ''
    for char in text:
        if char == ' ' and len(new_text) > 0 and not new_text[-1].isalnum():
            new_text += '-'
        elif char == ' ':
            new_text += '_'
        else:
            new_text += char
    return new_text