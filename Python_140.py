def fix_spaces(text):
    text += ' '
    new_text = ''
    count = 0
    for char in text:
        if char == ' ' and count > 0:
            new_text += '-'
            count = 0
        elif char == ' ':
            count += 1
        else:
            if count > 2:
                new_text += '-'
                count = 0
            new_text += char
    return new_text.strip()