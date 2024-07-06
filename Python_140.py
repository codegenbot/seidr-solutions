```
def fix_spaces(text):
    result = ""
    for char in text:
        if char != " ":
            result += char
        elif len(result) < 1 or (result[-1] != " " and result[-1] != "_"):
            result += "-"
        else:
            result += "_"
    return result