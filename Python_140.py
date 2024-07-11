def fix_spaces(text):
    return ''.join(['_' if text[i:i+2] == ' ' else '-' if text[i] == ' ' else c for i, c in enumerate(text)])