def fix_spaces(text):
    text = text.strip().replace(' ', '_').replace('--', '-').replace('__', '_')
    return text