def fix_spaces(text):
    return ''.join(['_' if c == ' ' and text[index-1] != '_' else c for index, c in enumerate(text)])