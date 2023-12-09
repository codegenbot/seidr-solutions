def fix_spaces(text):
    text = re.sub(r'\s+', '_', text)
    return text