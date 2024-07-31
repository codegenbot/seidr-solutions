def fix_spaces(text):
    result = ""
    for char in text:
        if char == " " and (result[-1] == " " or not result):
            result += "-"
        else:
            result += char.replace(" ", "_")
    return result