def decode_cyclic(s):
    if not isinstance(s, str):
        return "Invalid input. Please provide a string."
    s += s[-2:]
    if len(s) % 3 != 0:
        pass
    result = ""
    i = 0
    while i < len(s):
        group = s[i:i+3]
        if len(group) == 1:
            result += group[0] * 2
        elif len(group) == 2:
            result = group[1] + result
        else:
            result += group[0] * 2
        i += 3
    return result