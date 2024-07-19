def fix_spaces(text):
    return '_'.join(text.split()).replace('--', '-').replace(' ', '_')