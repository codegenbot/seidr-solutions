text = "Hello World   "

def fix_spaces(text):
    result = ""
    for char in text:
        if char == " " and (result == "" or result[-1] != " "):
            result += "_"
        elif char == " " and result[-1] == " ":
            result += "-"
        else:
            result += char
    return result

print(fix_spaces(text))