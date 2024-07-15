def fix_spaces(text):
    text += " "
    result = ""
    count = 0
    for char in text:
        if char != " " or count == 1:
            if char == " " and count > 2:
                result += "-"
            else:
                result += char
            count = 0
        else:
            count += 1
    return result.strip()