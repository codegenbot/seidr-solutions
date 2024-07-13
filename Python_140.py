def fix_spaces(text):
    return ''.join(['_' if c == ' ' else '-' if c == ' '*(len(list(g))-1) else c for c, g in zip(text, text.split())])