def fix_spaces(text):
    if text[0].isspace():
        return '_' + ''.join(['-' if c.isspace() else c for c in text[1:]])
    return '-'.join(['_' if c.isspace() else c for c in text])