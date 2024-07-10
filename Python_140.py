def fix_spaces(text):
    return ''.join(['_' if c == ' ' and prev == ' ' else c for prev, c in zip(' ' * len(text), text)])