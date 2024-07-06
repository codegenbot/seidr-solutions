```
def decode_cyclic(s):
    if not isinstance(s, str):
        return "Invalid input. Please provide a string."
    result = ""
    i = 0
    while i < len(s):
        group = s[i:i+2]
        if len(group) == 1:
            result = group[0] * 3 + result
        else:
            result += group[1] + result
        i += 2
    return result