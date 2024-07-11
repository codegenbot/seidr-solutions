def fix_spaces(text):
    return ''.join(['_' if c == ' ' and i > 0 and text[i-1] != ' ' else c for i, c in enumerate(text)])