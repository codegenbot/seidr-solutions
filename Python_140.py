def fix_spaces(text):
    result = ""
    for i in range(len(text)):
        if text[i] == " " and (not result or result[-1] != "_"):
            if len(result) > 0:
                result += "-"
        elif not result:
            result += text[i].replace(" ", "_")
        else:
            result += text[i]
    return result + " "