def fix_spaces(text):
    return ''.join([c if c != ' ' or prev != ' ' else '_' for prev, c in zip(' ' + text, text)])