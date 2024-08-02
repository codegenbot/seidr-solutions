```python
def fix_spaces(text):
    text = text.replace(' ', '_')
    return text.replace('  ', '_').replace('___', '-_').replace('_ _', '_-_').replace('_ ___', '_-_-').replace('_ ______', '_-_-_').replace('_ _______', '_-____').replace('_ ________', '_-_____')