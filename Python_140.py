```
def fix_spaces(text):
    text = text.replace(' ', '_')
    return text.replace('  ', '_').replace('___', '-___').replace('____', '-____').replace('_____','-_____')