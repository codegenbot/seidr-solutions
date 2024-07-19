def fix_spaces(text):
    return '_'.join(text.replace(' ', '_').split()).strip('_')