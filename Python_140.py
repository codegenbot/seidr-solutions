def fix_spaces(text):
    return '_'.join([word.strip() for word in text.split()])