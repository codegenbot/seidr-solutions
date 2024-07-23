def fix_spaces(text):
    result = ""
    for char in text:
        if char == " ":
            if text.count(" ") > 1:
                result += "-"
            else:
                result += "_"
        else:
            result += char
    return result