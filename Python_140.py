```
def fix_spaces(text):
    result = ""
    for char in text:
        if char == " ":
            if len(result) > 0 and result[-1] == " ":
                continue
            else:
                result += "_" if not result else " "
        else:
            result += char
    return result