def fix_spaces(text):
    return '_'.join(['-' * len(group) if len(group) > 2 else '_' for group in text.split()])