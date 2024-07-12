def fix_spaces(text):
    text = text.replace(' ', '_')
    while '  ' in text:
        text = text.replace('  ', ' -')
    while '_  ' in text:
        text = text.replace('_  ', '_-')
    while '__ ' in text:
        text = text.replace('__ ', '_-')
    while '___' in text:
        text = text.replace('___', '_-')
    while '____' in text:
        text = text.replace('____', '_-')
    return text