```
def replace_spaces(s):
    new_str = ""
    count = 0
    for char in s:
        if char == " " and count < 3:
            new_str += "%20"
            count = 0
        elif char != " ":
            count = 0
        else:
            count += 1
        new_str += char
    return new_str