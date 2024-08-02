def fix_spaces(text):
    return '_'.join([chunk.replace(' ', '_') if chunk.count(' ') > 0 else chunk for chunk in text.split()])