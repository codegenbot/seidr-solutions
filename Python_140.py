def fix_spaces(text):
    return '_'.join('-' if len(group) > 1 else group for group in text.split())