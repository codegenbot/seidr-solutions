```
def fix_spaces(text):
    new_text = text.replace(' ', '_')
    return new_text if ' ' in new_text else new_text.replace('_+', '-').replace('_', '')