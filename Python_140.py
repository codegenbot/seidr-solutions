def fix_spaces(text):
    return "".join(
        "-" if c == " " else c
        for prev_c, c in zip(" " + text, text + " ")
    ).strip("-")