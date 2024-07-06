Here is the completed code:

def fix_spaces(text):
    text = text.replace(' ', '_')
    text = text.replace('  ', '_').replace('___', '-').replace('_  ', '_-').replace('_ ___', '_-')
    return text