def fix_spaces(text):
    result = ""
    for i in range(len(text)):
        if i > 0 and text[i] == " " and text[i - 1] == " ":
            if len(result) >= 2 or result == "":
                result += "-"
            else:
                result += "_"
        elif text[i] != " ":
            result += text[i]
        else:
            result += "_"
    return result