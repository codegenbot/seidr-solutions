```
def fix_spaces(text):
    result = ""
    for char in text:
        if char == " " and (result == "" or result[-1] != " "):
            if len(result) > 0 and len(result) % 2 == 0:
                result += "-"
            else:
                result += "_"
        else:
            result += char
    return result