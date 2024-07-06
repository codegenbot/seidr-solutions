def fix_spaces(text):
    new_text = text.replace(" ", "_")
    new_text = new_text.replace('-   -', '-').replace('  ', '_')
    return new_text