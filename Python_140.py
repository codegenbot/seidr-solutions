```
def fix_spaces(text):
    result = ""
    for char in text:
        if char == " ":
            if len(result) > 0 and result[-1] == " ":
                if len(result) < 3 or result[-2] != " ":
                    result += "-"
                else:
                    result += "_"
            else:
                result += "_"
        else:
            result += char
    return result