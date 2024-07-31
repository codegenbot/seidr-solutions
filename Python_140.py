```
def fix_spaces(text):
    new_text = text.replace(' ', '_')
    while '--' in new_text:
        new_text = new_text.replace('--', '- ')
    return new_text.strip().replace('  ', ' -').strip()