def fix_spaces(text):
    return '-'.join('_'.join(text.split(' ')).split('__'))