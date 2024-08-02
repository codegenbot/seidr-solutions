def fix_spaces(text):
    text = text.replace(' ', '_')
    return '-'.join(i for i in text.split('_') if i)