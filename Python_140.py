```
def fix_spaces(text):
    result = ""
    for i in range(len(text)):
        if text[i] != " ":
            if len(result) > 0 and result[-1] == " ":
                continue
            else:
                result += text[i].replace(" ", "_")
        else:
            if len(result) > 0 and result[-1] == "_":
                continue
            else:
                result += " "
    return result.replace(" -", "-").replace("_ ", "_").strip()