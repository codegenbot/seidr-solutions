```
def fix_spaces(text):
    result = ""
    for char in text:
        if char == " ":
            if len(result) > 0 and result[-1] != " ":
                result += "-"
            else:
                result += "_"
        else:
            result += char
    return result