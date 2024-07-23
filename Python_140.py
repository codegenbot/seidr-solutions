```
def fix_spaces(text):
    result = ""
    for char in text:
        if char.isspace():
            if not result or (result and result[-1] == " ") :
                result += "-"
            else:
                result += "_"
        else:
            result += char
    return result