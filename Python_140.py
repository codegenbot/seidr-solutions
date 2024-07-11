```
def fix_spaces(text):
    new_text = ''
    for i in range(len(text) - 1):
        if text[i] == ' ' and text[i+1] == ' ':
            new_text += '-'
        elif text[i] != ' ':
            new_text += text[i]
    if text[-1] == ' ':
        new_text += '_'
    else:
        new_text += text[-1]
    return new_text.replace(' ', '_')