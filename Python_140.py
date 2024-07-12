```
def fix_spaces(text):
    result = ""
    prev_space = False
    for char in text:
        if char == " ":
            if prev_space or result == "":
                result += "-"
            else:
                result += "_"
            prev_space = True
        else:
            result += char
            prev_space = False
    return result