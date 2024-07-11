def fix_spaces(text):
    return "".join(
        ["-" if c == " " and text[i - 1] != " " else c for i, c in enumerate(text)]
    )