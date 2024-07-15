def fix_spaces(text):
    new_text = text.replace(' ', '_')
    return new_text if ' ' not in new_text else '-'.join(new_text.split())