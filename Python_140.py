```
def fix_spaces(text):
    new_text = ''
    for i in range(len(text)):
        if i > 0 and text[i-1] == ' ' and text[i] == ' ':
            new_text += '-'
        elif text[i] == ' ':
            new_text += '_'
        else:
            new_text += text[i]
    return new_text