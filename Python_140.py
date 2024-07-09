def fix_spaces(text):
    result = ""
    consecutive_spaces = 0

    for char in text:
        if char == " ":
            consecutive_spaces += 1
            if consecutive_spaces >= 2:
                result = result.rstrip("_") + "-"
        else:
            if consecutive_spaces >= 2:
                result += "-"
            elif consecutive_spaces >= 1:
                result += "_"
            result += char
            consecutive_spaces = 0

    if consecutive_spaces > 2:
        result = result.rstrip("_") + "-"
    elif consecutive_spaces >= 1:
        result += "_"

    return result