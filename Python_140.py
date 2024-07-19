def fix_spaces(text):
    return '_'.join([word if len(word) < 3 else '-'.join(word) for word in text.split()])