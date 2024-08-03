```
def fix_spaces(text):
    text = text.replace(' ', '_')
    while '  ' in text:
        text = text.replace('  ', '_ ')
    return text.strip().replace('_ ', '_').replace(' _', '_')