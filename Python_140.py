def fix_spaces(text):
    return ''.join(['_' if c == ' ' else '-' if c == ' ' else c for c in text])