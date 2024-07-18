def fix_spaces(text):
    return '_'.join('_' if len(group) > 1 else group for group in text.split() if group).strip('_')