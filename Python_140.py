```
def fix_spaces(text):
    result = ""
    prev_char = None
    for char in text:
        if char != " " or prev_char != " ":
            if char == " " and prev_char == " " and result[-1] == " ":
                result += "-"
            else:
                result += char.replace(" ", "_")
        prev_char = char
    return result