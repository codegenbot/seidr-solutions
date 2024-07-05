def fix_spaces(text):
    import re
    return re.sub(r' {3,}', '-', text.replace(' ', '_'))