def fix_spaces(text):
    return "".join("_" if (char == " " and (i > 0 and text[i - 1] != " ")) or (i == 0 and char == " ") else char for i, char in enumerate(text))