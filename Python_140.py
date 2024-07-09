def fix_spaces(text):
    return "".join(
        [
            "_" if (i == 0 or text[i - 1] == " ") and c == " "
            else c
            for i, c in enumerate(text)
            if c != " "
        ]
    )