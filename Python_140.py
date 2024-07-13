def fix_spaces(text):
    return '_'.join('-' if len(s) > 2 else s for s in text.split())