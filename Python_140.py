def fix_spaces(text):
    return (
        "_".join(
            c if c != " " or (i > 0 and text[i - 1] != " " and i < len(text) - 1 and text[i + 1] != " ")
            else ""
            for i, c in enumerate(text)
        )
    )