def fix_spaces(text):
    result = ""
    for i in range(len(text)):
        if result and result[-1] != " ":
            result += text[i].replace(" ", "_")
        elif text[i] == " ":
            if len(result) > 0:
                result += "-"
    return result + " "