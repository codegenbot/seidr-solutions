def fix_spaces(text):
    result = ""
    for i in range(len(text)):
        if text[i] == " ":
            if i < len(text) - 1 and text[i + 1] == " ":
                if i < len(text) - 2 and text[i + 2] == " ":
                    while i < len(text) - 1 and text[i + 1] == " ":
                        i += 1
                    result += "-"
                else:
                    result += "-"
            else:
                result += "_"
        else:
            result += text[i]
    return result