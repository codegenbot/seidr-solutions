def fix_spaces(text):
    return '_'.join([part.replace(' ', '-') if len(part) > 2 else part for part in text.split(' ')])