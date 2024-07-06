def decode_cyclic(s):
    if not isinstance(s, str) or len(s) < 1:
        return "Invalid input. Please provide a non-empty string."
    while len(s) % 3 != 0:
        s += s[-1]
    result = ""
    i = 0
    while i < len(s):
        group = s[i:i+3]
        if len(group) == 1:
            result = group[0] * 2 + result
        elif len(group) == 2:
            result = group[1] + result
        else:
            result += group[0] * 2
        i += 3
    return result