def fix_spaces(text):
    result = ""
    for char in text:
        if char != " " or result.endswith(" "):
            result += char if char != " " else "-"
        elif result[-1] == "-":
            result += "-"
    return result