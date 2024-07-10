```
def fix_spaces(text):
    new_text = ''
    in_word = False
    for char in text:
        if char == ' ':
            if not in_word and len(new_text) > 2:
                new_text += '-'
            elif in_word:
                new_text += '_'
            in_word = False
        elif char != '\n':
            new_text += char
            in_word = True
    return new_text.strip()