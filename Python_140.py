```
def fix_spaces(text):
    text = text.replace(' ', '_')
    while True:
        if '_' * 2 in text or '__' in text:
            text = text.replace('__', '_-')
            text = text.replace('_ ' + '_*', '_-_')
        else:
            break
    return text