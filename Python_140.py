def fix_spaces(text):
    result = ""
    for char in text:
        if char == " " and len(result) > 0 and result[-1] == " ":
            if len(result) < 3:
                return f"{text[0]}{text[1:2].replace(' ', '-')}{" ".join(text[2:])}"
            result += "-"
        elif char == " ":
            result += "_"
        else:
            result += char
    return result