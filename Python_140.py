def fix_spaces(text):
    return '_'.join(word if len(word) < 3 else '-' for word in text.split())