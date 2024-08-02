```
def fix_spaces(text):
    text += ' '
    new_text = ''
    count = 1
    for i in range(len(text)):
        if i > 0 and text[i] == ' ' and text[i-1] == ' ':
            if count < 2:
                new_text += '-'
                count = 1
            else:
                new_text += '-'
        elif text[i] != ' ':
            new_text += text[i]
            count = 1
        else:
            if count < 2:
                new_text += '_'
                count = 1
            else:
                new_text += '-'
        count += (text[i] == ' ')
    return new_text.strip()