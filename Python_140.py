def fix_spaces(text):
    return ''.join(['_' if c == ' ' and text[text.find(c)-1] == ' ' else c for c in text.strip()])