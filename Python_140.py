def fix_spaces(text):
    return ''.join(['_' if (c == ' ' and text[i-1] != ' ' and i!=0) else c for i, c in enumerate(text)])