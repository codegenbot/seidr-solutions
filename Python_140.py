def fix_spaces(text):
    text = text.replace(" ", "_")
    result = ""
    count = 0
    for char in text:
        if char == "_":
            count += 1
            if count >= 2:
                result += "-"
                continue
        else:
            count = 0
        result += char
    return result