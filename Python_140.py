```
def fix_spaces(text):
    result = ""
    for i in range(len(text)):
        if text[i] == " ":
            if i > 0 and text[i-1] == " ":
                while i < len(text) - 1 and text[i+1] == " ":
                    i += 1
                result += "-"
            else:
                result += "_"
        else:
            result += text[i]
    return result