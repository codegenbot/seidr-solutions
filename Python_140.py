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
        elif not char.isalnum():
            in_word = False
        elif in_word:
            count += 1
        in_word = True
        new_text += char
    return new_text.strip()