def fix_spaces(text):
    result = ""
    for i in range(len(text)):
        if text[i] == " ":
            if len(result) > 0:
                if result[-1] != " ":
                    result += "-"
                else:  
                    result += "_"
        else:
            result += text[i].replace(" ", "_")
    return result + " "