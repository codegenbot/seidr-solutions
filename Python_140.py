def fix_spaces(text):
    return '-'.join('_'.join(part.split()) for part in text.split('  '))