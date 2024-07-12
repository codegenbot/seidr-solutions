```
def fix_spaces(text):
    new_text = ''
    for i in range(len(text)):
        if text[i] == ' ' and i < len(text) - 1 and text[i+1] != ' ':
            new_text += '&nbsp;'
        else:
            new_text += text[i]
    return new_text