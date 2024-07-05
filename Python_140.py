def fix_spaces(text):
    return '-'.join('_'.join(part for part in text.split(' ') if part).split('__'))