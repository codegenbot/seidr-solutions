def fix_spaces(text):
    result = ""
    for i in range(len(text)):
        if text[i] != " ":
            result += text[i]
        elif i > 0 and text[i - 1] == " ":
            if len(result) < 2 or result[-1] != "-":
                result += "-"
        else:
            result += "_"
    return result