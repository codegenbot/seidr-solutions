def fix_spaces(text):
    result = ""
    for char in text:
        if char != " " or (char == " " and len(result) > 0 and result[-1] != " "):
            result += char
        elif len(result) > 2 and result[-1] == " " and result[-2] == " ":
            result += "-"
        else:
            result += "_"
    return result