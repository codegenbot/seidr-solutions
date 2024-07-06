def fix_spaces(text):
    text = text.strip().replace(' ', '_')
    if text.startswith('_'):
        return '-' + text[1:]
    return '-' + text