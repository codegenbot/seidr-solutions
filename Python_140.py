def fix_spaces(text):
    return '_'.join(text.strip().split()).replace('--', '-').replace(' ', '_')