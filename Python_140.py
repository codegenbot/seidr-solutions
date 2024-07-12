def fix_spaces(text):
    text = text.replace(' ', '_')
    while '--' in text:
        text = text.replace('--', '-')
    while '__' in text:
        text = text.replace('__', '_')
    return text