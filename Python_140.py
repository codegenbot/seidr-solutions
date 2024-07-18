def fix_spaces(text):
    return '_'.join(group if len(group) > 1 else group.replace(' ', '_') for group in text.split())