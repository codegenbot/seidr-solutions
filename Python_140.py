```
def fix_spaces(text):
    new_text = ''
    for i in range(len(text)):
        if text[i] == ' ' and (i == len(text) - 1 or text[i+1] != ' '):
            new_text += '_'
        elif text[i] == ' ' and i < len(text) - 1 and text[i+1] == ' ':
            while i < len(text) - 1 and text[i+1] == ' ':
                i += 1
            new_text += '-'
        else:
            new_text += text[i]
    return new_text