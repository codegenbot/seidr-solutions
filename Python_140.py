```
def fix_spaces(text):
    text = text.strip()
    if text.startswith(' '):
        return '_' + text[1:].replace(' ', '_')
    return text.replace(' ', '_')