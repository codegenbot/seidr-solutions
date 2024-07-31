```
def fix_spaces(text):
    text = text.replace(' ', '_')
    return text.replace('  ', '_').replace('___', '-').replace('____', '-').replace('_____','-').replace('______', '-')