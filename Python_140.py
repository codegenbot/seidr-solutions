def fix_spaces(text):
    return ''.join(['_' if c == ' ' else '-' if c == ' ' and text[text.index(c)+1] == ' ' else c for c in text])