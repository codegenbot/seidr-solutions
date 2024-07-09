def fix_spaces(text):
    text = text.replace(' ', '_')
    text = '_'.join(text.split())
    return text