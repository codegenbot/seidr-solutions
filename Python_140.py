def fix_spaces(text):
    return ''.join(['_' if x == ' ' else '-' if ' ' in x else x for x in text.split()])