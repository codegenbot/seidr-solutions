def fix_spaces(text):
    return '_'.join(word.replace(' ', '_') if len(word) > 2 else word for word in text.split())