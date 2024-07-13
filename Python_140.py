def fix_spaces(text):
    return '_'.join([word.replace(' ', '-') if ' ' * 2 in word else word.replace(' ', '_') for word in text.split()])