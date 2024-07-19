def fix_spaces(text):
    return '-'.join(word.replace(' ', '-') if len(word) > 1 else word for word in text.split())