def replace_multiple_spaces(text):
    result = ""
    i = 0
    while i < len(text):
        if text[i] == " ":
            if i + 1 < len(text) and text[i + 1] == " ":
                result += "&nbsp;"
            else:
                result += " "
        else:
            result += text[i]
        i += 1
    return result