def fix_spaces(text):
    result = ""
    for i in range(len(text)):
        if text[i] != " " or (i > 0 and text[i - 1] == " "):
            result += text[i].replace(" ", "_")
    return result