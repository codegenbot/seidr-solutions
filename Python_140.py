def fix_spaces(text):
    result = ""
    prev_was_space = False
    for char in text:
        if char == " ":
            if prev_was_space:
                result += "-"
                prev_was_space = False
            else:
                result += "_"
                prev_was_space = True
        else:
            result += char
            prev_was_space = False
    return result