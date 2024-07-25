def fix_spaces(text):
    return "-".join("_" if len(group) > 2 else group for group in text.split())