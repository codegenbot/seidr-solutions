Here is the modified code:

def fix_spaces(text):
    result = ""
    for char in text:
        if char.isspace():
            if not result or result[-1].isspace():
                result += "-"
            else:
                result += "_"
        else:
            result += char
    return result