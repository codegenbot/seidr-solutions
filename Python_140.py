def fix_spaces(text):
    return "".join(
        [
            "_" if c == " " and (i + 1 == len(text) or text[i + 1] != " ") else c
            for i, c in enumerate(text)
        ]
    )