def fix_spaces(text):
    result = ""
    for i, char in enumerate(text):
        if char == " " and (i > 0 and text[i - 1] == " " or i < len(text) - 1 and text[i + 1] == " "):
            if result:
                result += "-"
        else:
            result += "_" if char == " " else char
    return result.replace("_", " ")