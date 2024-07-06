def fix_spaces(text):
    new_text = text.replace(" ", "_")
    return new_text.replace('   ', '-').replace('  ', '_')