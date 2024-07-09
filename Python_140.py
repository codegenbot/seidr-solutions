def fix_spaces(text):
    result = ""
    for i in range(len(text)):
        if text[i] == " ":
            if len(result) > 0:
                result += "-"
        else:
            result += text[i].replace(" ", "_")
    return result