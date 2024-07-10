def fix_spaces(text):
    text = text.replace('   ', '-')
    text = text.replace('  ', '_')
    text = text.replace(' ', '_')
    return text