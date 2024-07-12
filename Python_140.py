```
def fix_spaces(text):
    new_text = ''
    for char in text:
        if char == ' ':
            if len(new_text) > 0 and not new_text[-1].isalnum():
                new_text += '-'
            else:
                new_text += '_'
        elif char.isalnum():
            new_text += char
        else:
            new_text += char
    return new_text