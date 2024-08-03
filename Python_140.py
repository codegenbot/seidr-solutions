def fix_spaces(text):
    result = ""
    for char in text:
        if char == " " and (result == "" or not result[-1].isspace()):
            result += "_"
        elif char == " " and result[-1] == "-":
            continue
        else:
            result += char
    return result