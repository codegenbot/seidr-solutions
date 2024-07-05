def fix_spaces(text):
    import re
    text = re.sub(r' {3,}', '-', text)
    text = re.sub(r' ', '_', text)
    return text