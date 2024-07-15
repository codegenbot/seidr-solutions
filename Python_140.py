def fix_spaces(text):
    return '_'.join([word if len(word) <= 2 else '-'.join(word.split()) for word in text.strip().split()])