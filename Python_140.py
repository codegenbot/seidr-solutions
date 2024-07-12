def fix_spaces(text):
    return "".join(
        "_" if char == " " and (i == 0 or text[i - 1] != " ") else char
        for i, char in enumerate(text)
    )