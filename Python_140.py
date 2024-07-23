def fix_spaces(text):
    result = ""
    for i in range(len(text)):
        if text[i:i+3].strip() == '   ':  
            result += "_"
        else:
            result += text[i] if text[i] != " " else "_"  
    return result