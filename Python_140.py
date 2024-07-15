def fix_spaces(text):
    return text.replace(" ", lambda s: "_" if len(s.group()) < 2 else "-")