def fix_spaces(text):
    return ' '.join([word for word in text.split(" ") if word.strip()])