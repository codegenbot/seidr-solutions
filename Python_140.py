def fix_spaces(text):
    return '_'.join(group if len(group.strip()) > 2 else group.replace(' ', '_') for group in text.split('_'))