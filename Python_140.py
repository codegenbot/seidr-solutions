def fix_spaces(text):
    result = ""
    for char in text:
        if char.isspace():
            if len(result) > 0 and (result[-1] == " " or result[-1].isalnum()):
                result += "_"
            else:
                result += "-"
        else:
            result += char
    return result