```
def fix_spaces(text):
    result = ""
    for char in text:
        if char == " " and len(result) > 0 and result[-1] == " ":
            if len(result) < 3:
                return "Error: More than two consecutive spaces"
            else:
                result += "-"
        elif char != " ":
            result += char
        else:
            result += "_"
    return result