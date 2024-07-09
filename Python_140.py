def fix_spaces(text):
    return "".join(["_" if not c.isalpha() else c for c in text])