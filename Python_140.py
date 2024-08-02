def fix_spaces(text):
    text = ' '.join(text.split())
    text = text.replace(" ", "_")
    return text