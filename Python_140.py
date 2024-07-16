def fix_spaces(text):
    text = '_'.join(text.split())
    while '__' in text:
        text = text.replace('__', '_')
    return text