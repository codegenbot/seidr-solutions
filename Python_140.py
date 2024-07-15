def fix_spaces(text):
    return '_'.join([word if len(word) <= 2 else word.replace(' ', '_') for word in text.split()])