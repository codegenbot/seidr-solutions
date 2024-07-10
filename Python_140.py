```
def fix_spaces(text):
    new_text = ''
    count = 0
    in_word = False
    for char in text:
        if char == ' ':
            if not in_word:
                new_text += ' '
            else:
                if count <= 2:
                    new_text += '_'
                else:
                    new_text += '-'
                count = 0
            in_word = False
        elif char.isalnum():
            new_text += char
            in_word = True
            count = 1
        else:
            if in_word and count > 0:
                if count <= 2:
                    new_text += '_'
                else:
                    new_text += '-'
                count = 0
            in_word = False
    return new_text.strip()