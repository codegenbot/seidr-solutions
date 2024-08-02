def fix_spaces(text):
    return '_'.join(group.strip().replace(' ', '-') if len(group.strip()) > 2 else group for group in text.split('_'))