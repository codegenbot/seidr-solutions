def fix_spaces(text):
    text = text.replace(" ", "_")
    result = ""
    prev_char = ""
    count = 0
    
    for char in text:
        if char == " ":
            count += 1
            if count > 2:
                prev_char = "-"
            continue
        else:
            if count > 2:
                result += prev_char
            result += char
            prev_char = ""
            count = 0
    
    if count > 2:
        result += prev_char
    
    return result