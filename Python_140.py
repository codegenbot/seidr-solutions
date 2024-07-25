def fix_spaces(text):
    return '-'.join('_' if s == ' ' else s for s in text.replace('  ', '_ ').split(' '))