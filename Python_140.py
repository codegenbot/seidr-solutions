```
def fix_spaces(text):
    text = text.replace(' ', '_')
    return text.replace('  ', '_').replace('__', '_-').replace('_  ', '_-').replace('_ __', '_--').replace('_   ', '_---')