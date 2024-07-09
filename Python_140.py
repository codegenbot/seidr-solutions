def fix_spaces(text):
    return "-".join(c if c != " " else "-" for c in text)