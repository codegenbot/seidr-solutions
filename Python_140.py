def fix_spaces(text):
    return '_'.join(word.replace(' ', '-') if len(word) > 1 else word for word in text.split())