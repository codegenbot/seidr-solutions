def fix_spaces(text):
    result = ""
    for char in text:
        if char == " " and (len(result) == 0 or result[-1] != " "):
            result += "_"
        elif char == " " and len(result) > 2 and result[-2] == " ":
            result += "-"
        else:
            result += char
    return result