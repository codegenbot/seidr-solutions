def fix_spaces(text):
    text = text.replace(' ', '_')
    text = text.strip('_')
    return text