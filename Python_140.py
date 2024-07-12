def fix_spaces(text):
    result = ""
    prev_space = False
    for char in text:
        if char == " " and not prev_space:
            result += "_"
            prev_space = True
        elif char == " ":
            result += "-"
            prev_space = True
        else:
            result += char
            prev_space = False
    return result