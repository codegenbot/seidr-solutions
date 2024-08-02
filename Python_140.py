def fix_spaces(text):
    return '_'.join([chunk.replace(' ', '-') if chunk.count(' ') > 1 else chunk for chunk in text.split()])