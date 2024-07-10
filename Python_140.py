```
def fix_spaces(text):
    new_text = ''
    in_word = True
    for char in text:
        if char == ' ':
            if not in_word:
                if len(new_text) > 0:
                    if len(new_text) <= 2:
                        new_text += '_'
                    else:
                        new_text += '-'
            else:
                if len(new_text) > 2 and new_text[-1] != '-':
                    new_text = new_text[:-1] + '-'
        elif char != '\n' and char != ' ':
            new_text += char
            in_word = True
    return new_text.strip()