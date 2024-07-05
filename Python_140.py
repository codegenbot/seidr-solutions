def fix_spaces(text):
    return '_'.join([part if len(part) == 1 else '-' for part in text.split(' ')])