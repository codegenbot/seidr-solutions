def fix_spaces(text):
    return "".join("_" if char == " " and text[i - 1] != " " else char for i, char in enumerate(text))