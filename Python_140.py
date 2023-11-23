def fix_spaces(text):
    return '-'.join(text.strip().split()).replace(' ', '_').replace('-', '')