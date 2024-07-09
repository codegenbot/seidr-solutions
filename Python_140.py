def fix_spaces(text):
    return re.sub(r'\s{2,}', '-', text.replace(' ', '_'))