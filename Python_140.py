def fix_spaces(text):
    text = text.replace(' ', '_')
    return re.sub(r' {2,}', '-', text)