def fix_spaces(text):
    result = ""
    for char in text:
        if char == " " and len(result) > 0 and result[-1] == " ":
            while len(result) < 3 and result[-1] == " ":
                result = result[:-1]
            result += "_"
        elif char == " ":
            result += "_"
        else:
            result += char
    return result