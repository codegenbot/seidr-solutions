```
def fix_spaces(text):
    result = ""
    for i in range(len(text)):
        if text[i] == " ":
            if len(result) > 0 and result[-1] != " ":
                result += "-"
        elif text[i] != " " or not result:
            result += text[i].replace(" ", "_")
    return result