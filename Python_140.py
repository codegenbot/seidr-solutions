```
def fix_spaces(text):
    new_text = ""
    for i in range(len(text)):
        if i > 0 and text[i] == ' ' and text[i-1] == ' ':
            if new_text.endswith('_'):
                new_text += '-'
            else:
                new_text += '_'
        elif text[i] != ' ' or (i > 0 and not text[i-1].isspace()):
            new_text += text[i].replace(' ', '_')
    return new_text