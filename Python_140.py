def fix_spaces(text):
    result = ""
    for i in range(len(text)):
        if (
            text[i] == " "
            and (i == 0 or text[i - 1] != " ")
            and (i == len(text) - 1 or text[i + 1] != " ")
        ):
            result += "_"
        elif text[i] == " ":
            if i < len(text) - 2 and text[i + 1] == " " and text[i + 2] == " ":
                result += "-"
            else:
                result += "_"
        else:
            result += text[i]
    return result