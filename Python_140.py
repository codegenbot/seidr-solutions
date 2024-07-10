def fix_spaces(text):
    new_text = ''
    count = 0
    for char in text:
        if char == ' ':
            if count < 2:
                new_text += '_'
            else:
                new_text += '-'
            count = 0
        elif count >= 3:
            new_text += ' '
            new_text += '_'
            count = 1
        else:
            new_text += char
            count += 1
    if count > 0:
        if count < 2:
            new_text += '_' * (count + 1)
        else:
            new_text += '-' * (count + 1)
    return new_text.strip()