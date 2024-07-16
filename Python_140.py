def fix_spaces(text):
    result = ""
    consecutive_count = 0
    for char in text:
        if char == " ":
            consecutive_count += 1
            if consecutive_count > 2:
                result = result[:-1] + "-"
        else:
            consecutive_count = 0
        if char != " ":
            result += char
        else:
            result += "_"
    return result