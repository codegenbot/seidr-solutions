def fix_spaces(text):
    text = text.replace(" ", "_")
    count = 0
    result = ""
    for char in text:
        if char == " ":
            count += 1
            if count > 1:
                result += "-"
        else:
            count = 0
            result += char
    return result