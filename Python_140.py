def fix_spaces(text):
    result = ""
    consecutive_spaces = 0
    for char in text:
        if char == " ":
            consecutive_spaces += 1
            if consecutive_spaces > 2:
                result = result + "-"
        else:
            result = result + char
            if consecutive_spaces > 2:
                result = result + "_"
            consecutive_spaces = 0
    return result