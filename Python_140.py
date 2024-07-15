```
def fix_spaces(text):
    result = ""
    for i in range(len(text)):
        if text[i] == " ":
            if i < len(text) - 1 and text[i+1] == " ":
                if result and result[-1] != "-":
                    result += "-"
                continue
        result += text[i]
    return result