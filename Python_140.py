```
def fix_spaces(text):
    text = text.replace(' ', '_')
    return text.replace('  ', '_').replace('___', '-').replace('__', '-').replace('_', '-')