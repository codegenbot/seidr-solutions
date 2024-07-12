```
def fix_spaces(text):
    new_text = ''
    for char in text:
        if char == ' ':
            if len(new_text) > 0 and not new_text[-1].isalpha():
                new_text += '_'
            else:
                new_text += '-'
        elif char.isalpha():
            new_text += char
        else:
            new_text += char
    return new_text