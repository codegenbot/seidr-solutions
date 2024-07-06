def fix_spaces(text):
    if text.startswith(' '):
        return '_' + '-'.join(['_' if c.isspace() else c for c in text[1:]])
    return '-'.join(['_' if c.isspace() else c for c in text])