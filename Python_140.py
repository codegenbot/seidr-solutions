```
def fix_spaces(text):
    return text.replace(' ', '_').replace('  ', ' - ').replace('_  ', '_- ').replace('__', '_-').replace('___', '_--').replace('____', '_---')