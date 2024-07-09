def fix_spaces(text):
    return ''.join(['-' if c == ' ' else c for c in text])