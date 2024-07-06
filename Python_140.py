def fix_spaces(text):
    new_text = text.replace(' ', '_')
    return new_text if '  ' not in new_text else new_text.replace('  ', '-').replace('_ ', '_').replace(' _', '_')