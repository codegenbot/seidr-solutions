```
def fix_spaces(text):
    result = ""
    for char in text:
        if char == " " and (result[-1] == " " or not result):
            result += "-"
        elif char == " ":
            result += "_"
        else:
            result += char
    return result