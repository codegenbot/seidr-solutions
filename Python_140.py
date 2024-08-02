def fix_spaces(text):
    text = '_'.join(text.split())
    text = text.replace("--", "-")
    return text