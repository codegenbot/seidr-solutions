```
def fix_spaces(text):
    new_text = ''
    for char in text:
        if char == ' ' and (new_text[-1] != ' ' or len(new_text) == 0):
            new_text += '_'
        else:
            new_text += char
    return new_text