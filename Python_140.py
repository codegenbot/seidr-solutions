def fix_spaces(text):
    result = ""
    for char in text:
        if char.isspace():
            result += "_"
        else:
            result += char
    return result