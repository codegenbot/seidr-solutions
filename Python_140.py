def fix_spaces(text):
    return '_'.join(word if len(word) <= 2 else word.replace(' ', '-') for word in text.split())