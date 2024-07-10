```
def fix_spaces(text):
    result = ""
    for char in text:
        if char == " ":
            if len(result) > 0 and result[-1] == " ":
                if len(result) > 2 or (len(result) == 2 and result[:-2].count(" ") == 0):
                    result += "-"
                else:
                    result += "_"
            else:
                result += "_"
        else:
            result += char
    return result