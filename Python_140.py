def replace_repeated_spaces(text):
    result = ""
    i = 0
    while i < len(text):
        if text[i] == " ":
            if i + 1 < len(text) and text[i+1] == " ":
                result += "%20"
                i += 2
            else:
                result += " "
                i += 1
        else:
            result += text[i]
            i += 1
    return result