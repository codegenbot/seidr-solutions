def fix_spaces(text):
    text = text.replace('-', ' ')
    text = ' '.join(text.split())
    return text.replace(' ', '_')