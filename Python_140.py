def fix_spaces(text):
    return ''.join(['_' if c == ' ' and (index == 0 or text[index-1] != '_') else c for index, c in enumerate(text)])