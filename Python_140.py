def fix_spaces(text):
    return "-".join(
        c if c != " " or prev_c != " " else "-"
        for prev_c, c in zip(" " + text, text + " ")
    )