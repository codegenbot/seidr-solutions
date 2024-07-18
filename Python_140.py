def fix_spaces(text):
    cleaned_text = ' '.join(text.split())
    return '_'.join('_' if len(group) > 1 else group for group in cleaned_text.split() if group)