def fix_spaces(text):
    return ''.join(['_' if c == ' ' and c == prev else c for prev, c in zip(' ' + text, text)])