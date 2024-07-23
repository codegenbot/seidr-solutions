```
def fix_spaces(text):
    result = ""
    for i, char in enumerate(text):
        if i > 0 and text[i-1].isspace() or not i:
            if char.isspace():
                result += "-"
            else:
                result += "_"
        else:
            result += char
    return result