def fix_spaces(text):
    return ''.join(['_' if c == ' ' else '_' * 2 if c == '  ' else c for c in text])