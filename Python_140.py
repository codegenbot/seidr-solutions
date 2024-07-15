```
def fix_spaces(text):
    text = text.replace(' ', '_')
    while True:
        prev_text = text
        text = text.replace('___', '-_-')
        text = text.replace('__ ', '_- ')
        if prev_text == text:
            break
    return text