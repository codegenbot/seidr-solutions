def fix_spaces(text):
    return '-'.join('_'.join(part.split()).replace('_', ' ') for part in text.split('  '))