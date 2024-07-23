```
def fix_spaces(text):
    new_text = ""
    for i in range(len(text) - 1):
        if text[i] != ' ' and (text[i+1] == ' ' or i == len(text) - 2):
            new_text += text[i]
        elif text[i] == ' ':
            if i > 0 and text[i-1] == ' ':
                new_text += '-'
            else:
                new_text += '_'
    new_text += text[-1]
    return new_text