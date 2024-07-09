def fix_spaces(text):
    result = ""
    consecutive_spaces = 0
    
    for char in text:
        if char == " ":
            consecutive_spaces += 1
            if consecutive_spaces > 2:
                result = result[:-2] + "-"
        else:
            if consecutive_spaces > 2:
                result += "-"
            elif consecutive_spaces > 0:
                result += "_"
            result += char
            consecutive_spaces = 0
    
    if consecutive_spaces > 2:
        result = result[:-2] + "-"
    elif consecutive_spaces > 0:
        result += "_"
    
    return result