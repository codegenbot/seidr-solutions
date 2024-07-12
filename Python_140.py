```
def fix_spaces(text):
    result = ""
    for char in text:
        if char == " " and len(result) > 0 and result[-1] == " ":
            if len(result) > 2 or (len(result) == 2 and result[0] != "_"):
                result += "-"
            else:
                result += "_"
        elif char == " ":
            result += "_"
        else:
            result += char
    return result