def fix_spaces(text):
    return ''.join(['_' if c == ' ' else '-' if c == ' ' * 3 else c for c in text])