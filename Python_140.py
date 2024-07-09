def fix_spaces(text):
    return "".join(["_" if c == " " and c != "_" else c for c in text])