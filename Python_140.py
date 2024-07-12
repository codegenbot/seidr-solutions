def fix_spaces(text):
    return '_'.join([chunk if len(chunk) <= 2 else chunk.replace(' ', '-') for chunk in text.split()])