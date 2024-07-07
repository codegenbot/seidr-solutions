```
def fix_spaces(text):
    new_text = text.replace(' ', '_')
    return new_text.replace('  ', '-').replace('_  ','_-_').replace('__','_-_')