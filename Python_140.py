def fix_spaces(text):
    result = ""
    count = 0
    for char in text:
        if char == " ":
            count += 1
            if count > 2:
                result = result.rstrip("_")
                result += "-"
                count = 0
        else:
            result += "_" * count + char
            count = 0
    return result.rstrip("_")