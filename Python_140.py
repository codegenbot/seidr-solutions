def fix_spaces(text):
    result = ""
    for i in range(len(text)):
        if text[i] == " ":
            if i < len(text) - 1 and text[i + 1] == " ":
                if i < len(text) - 2 or text[i + 2] != " ":
                    result += "-"
                else:
                    i += 1
                    continue
            else:
                result += "_"
        else:
            result += text[i]
    return result