def fix_spaces(text):
    text = text.strip().replace(' ', '_')
    text = text.replace('--', '-').replace('__', '_')
    return text