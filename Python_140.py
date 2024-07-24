def fix_spaces(text):
    result = ""
    for char in text:
        if char == " " and (len(result) > 0 and result[-1] != " ") or len(result) == 0:
            result += "_"
        elif char == " " and result[-1] == " ":
            result += "-"
        else:
            result += char
    return result