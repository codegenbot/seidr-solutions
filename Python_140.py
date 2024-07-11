def fix_spaces(text):
    return "".join(
        [
            (
                "_"
                if c == " "
                and (i == len(text) - 1 or (i + 1 < len(text) and text[i + 1] != " "))
                else c
            )
            for i, c in enumerate(text)
        ]
    )