def fix_spaces(text):
    return '_'.join('-' if len(group.replace(' ', '')) > 2 else group for group in text.split() if group)