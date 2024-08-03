"""def fix_spaces(text):
    text = text.replace(" ", "_")
    return "".join(["_" if text[i] != " " or (text[i] == " " and i > 0 and text[i-1] != " ") else "-" for i in range(len(text))]).lstrip("_")"""