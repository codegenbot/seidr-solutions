def fix_spaces(text):
    return '_'.join([word for word in text.split() if word.isalnum()])