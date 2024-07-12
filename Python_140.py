def fix_spaces(text):
    return ''.join(['_' if c == ' ' else '_' for c in text])