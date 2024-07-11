def fix_spaces(text):
    return "".join(
        ["-" if c == " " and (i == 0 or text[i - 1] != " ") else c for i, c in enumerate(text)]
    )