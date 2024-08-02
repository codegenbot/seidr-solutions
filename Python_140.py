def fix_spaces(text):
    return '_'.join(group.replace(' ', '-') if len(group.strip()) > 0 else '-' for group in text.split('_'))