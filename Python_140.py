def fix_spaces(text):
    return "".join(
        [
            (
                "_"
                if c == " " and (i == 0 or text[i - 1] != " ")
                else "_" if c == " " else c
            )
            for i, c in enumerate(text)
        ]
    )