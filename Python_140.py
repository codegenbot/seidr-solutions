```
def fix_spaces(text):
    result = ""
    for char in text:
        if char == " ":
            if len(result) > 0 and result[-1] != " ":
                result += "_"
            elif len(result) < 2 or result[-2:] != "  ":
                result += "-"
            else:
                result += "-"
        else:
            result += char
    return result