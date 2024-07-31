```
def fix_spaces(text):
    text += " "
    new_text = ""
    for i in range(len(text) - 1):
        if text[i] != ' ' or text[i+1] == ' ':
            new_text += text[i]
        elif new_text and new_text[-1] != ' ':
            new_text += '-'
        else:
            new_text += ' '
    return new_text.strip()