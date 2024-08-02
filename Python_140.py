def fix_spaces(text):
    return '-'.join([chunk if chunk.count(' ') <= 1 else '_'.join(chunk.split()) for chunk in text.split()])