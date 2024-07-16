def fix_spaces(text):
    return ''.join(['_' if c == ' ' else '-' if c == ' ' * 2 else c for c in text])