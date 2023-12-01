def fix_spaces(text):
    new_text = ""
    prev_char = ''
    count = 0
    
    for char in text:
        if char == ' ':
            count += 1
            if count == 2:
                new_text += '-'
            elif count > 2:
                continue
            else:
                new_text += '_'
        else:
            new_text += char
            count = 0
    
    return new_text