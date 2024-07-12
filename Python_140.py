def fix_spaces(text):
    text = text.replace(' ', '_')
    text = text.replace('--', '-')
    text = text.replace('__', '_')
    return text