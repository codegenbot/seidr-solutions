```
def fix_spaces(text):
    text += ' '
    new_text = ''
    count = 1
    for i in range(len(text)):
        if i > 0 and text[i] == ' ' and text[i-1] == ' ':
            if count < 2:
                new_text += '_'
                count = 0
        else:
            new_text += ('_' if text[i] == ' ' else text[i])
            count += (1 if text[i] == ' ' else 0)
    return new_text.strip()