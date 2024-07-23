```Python
def fix_spaces(text):
    result = ""
    for char in text:
        if char.isspace():
            if not result or result[-1].isspace():
                result += "-"
            else:
                result += "_"
        else:
            if result and not result[-1].isspace():
                result += "_"
            result += char
    return result