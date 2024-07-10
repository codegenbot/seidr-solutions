```
def fix_spaces(text):
    new_text = ""
    for char in text:
        if char != ' ':
            new_text += char
        elif len(new_text) > 0 and new_text[-1] == ' ':
            if new_text.count(' ') <= 2:
                new_text += char
            else:
                new_text += '-'
        else:
            new_text += '_'
    return new_text