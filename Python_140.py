```
def fix_spaces(text):
    return text.replace(' ', '_').replace('  +', lambda m: '_' + m.group().replace(' ', '-')).replace('  ', '-')