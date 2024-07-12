def fix_spaces(text):
    return "".join(c if c != " " or (i == 0 or i == len(text) - 1) or text[i + 1 if i < len(text) - 1 else i] != " " else "_" for i, c in enumerate(text))