def fix_spaces(text):
    return "".join(
        [
            c if c != " " or (i > 0 and text[i - 1] != " ") else "_"
            for i, c in enumerate(text)
        ]
    )