def fix_spaces(text):
    return re.sub(r'\s{3,}', '-', re.sub(r'\s', '_', text))