```
def decode_cyclic(s):
    if not isinstance(s, str):
        return "Invalid input. Please provide a string."
    while len(s) % 3 != 0:
        s += s[-1]
    result = ""
    i = 0
    while i < len(s):
        group = s[i:i+2]
        if len(group) == 1:
            result = group[0] * 2 + result
        else:
            result += group[1] + result
        i += 2
    return result