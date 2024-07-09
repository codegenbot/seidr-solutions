def fix_spaces(text):
    result = ""
    for i in range(len(text)):
        if text[i] == " ":
            if len(result) > 0 and result[-1] == " ":
                if len(result) < 2 or result[-2:] != " " * 2:
                    result += "-"
                else:
                    result += "-"
                    while len(result) > 1 and result[-2:] == "--":
                        result = result[:-1]
            else:
                result += "_"
        else:
            result += text[i]
    return result