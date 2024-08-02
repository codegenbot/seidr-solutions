```
def fix_spaces(text):
    text = text.replace(' ', '_')
    return text.replace('  ', '_').replace('___', '-_').replace('_ _', '-_-').replace('_ ___', '-_-_').replace('_ ______', '-____').replace('_ _______', '-_____')