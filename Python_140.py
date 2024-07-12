def fix_spaces(text):
    return '_'.join([word if word != '' else '_' for word in text.split()])