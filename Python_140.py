def fix_spaces(text):
    text = '_'.join(text.strip().split())
    text = text.replace("--", "-")
    return text