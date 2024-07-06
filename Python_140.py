def fix_spaces(text):
    text = text.replace(' ', '_')
    text = text.replace('  ', '-').replace('_  ', '_-').replace(' _', '_-').replace(' _ ', '_-')
    return text