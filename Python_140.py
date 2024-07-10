def fix_spaces(text):
    return ''.join(['_' if c == ' ' else '-' if c == ' ' and text[i+1] == ' ' else c for i, c in enumerate(text)])