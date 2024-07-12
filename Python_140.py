```Python
def fix_spaces(text):
    result = ""
    for char in text:
        if char == " " and (result == "" or result[-1] != " "):
            result += "_"
        elif char == " " and result[-1] == " ":
            if len(result) > 1:
                result = result[:-1] + "-"
        else:
            result += char
    return result