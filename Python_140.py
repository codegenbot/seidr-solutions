def fix_spaces(text):
    text = text.replace(' ', '_')
    return text.replace('___', '-').replace('__', '-')