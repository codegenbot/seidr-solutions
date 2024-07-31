def fix_spaces(text):
    text = text.replace(' ', '_')
    return text.replace('______', '-').replace('____', '_').replace('__', '_')