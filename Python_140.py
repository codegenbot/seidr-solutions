def fix_spaces(text):
    return ''.join(['_' if c == ' ' else c if c != '-' else '-' for c in text]).replace('   ', '-').replace('  ', '_')