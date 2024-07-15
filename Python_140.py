```
def fix_spaces(text):
    result = ""
    for char in text:
        if char == " " and (result == "" or len(result) > 2 or result[-1] != " "):
            result += "_"
        else:
            result += char
    return result