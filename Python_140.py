def fix_spaces(text):
    return "".join([c if c != " " or (i < len(text) - 1 and text[i + 1] != " ") else "_" for i, c in enumerate(text)]) + "_"