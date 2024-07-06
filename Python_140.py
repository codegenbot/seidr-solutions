def fix_spaces(text):
    if len(text) < 3:
        return text
    else:
        return text[:3] + '...' + text[-3:]