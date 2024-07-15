def fix_spaces(text):
    result = ""
    for i in range(len(text)):
        if i > 0 and text[i - 1] == " " and text[i] == " ":
            if len(result) + 3 > len(text):
                return result[:-2] + "-" + text[i:]
            result += "-"
        else:
            if result[-1] != " " and text[i] == " ":
                result += "_"
            else:
                result += text[i]
    return result