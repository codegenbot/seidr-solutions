def fix_spaces(text):
    return "-".join(
        c if c != " " or text.startswith(" ") else "-"
        for c in text
    ).replace("---", "-")