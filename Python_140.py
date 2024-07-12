def fix_spaces(text):
    return ' '.join([word.strip() for word in text.split() if word.strip()])