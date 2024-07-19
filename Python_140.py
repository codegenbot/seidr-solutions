def fix_spaces(text):
    return '_'.join(text.replace('-', '').split()).replace(' ', '_')