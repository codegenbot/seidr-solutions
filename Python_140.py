def fix_spaces(text):
    new_text = ''
    for i in range(len(text)):
        if text[i] == ' ':
            if i > 0 and text[i-1] not in ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']:
                new_text += '_'
            else:
                new_text += ' '
        elif text[i].lower() in ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']:
            new_text += text[i].upper()
        else:
            new_text += text[i]
    return new_text