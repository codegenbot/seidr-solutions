def decode_cyclic(s: str):
    result = ""
    i = 0
    if len(s) < 2:
        return s
    while i < len(s):
        if i + 1 <= len(s) - 1:
            group = s[i:i+1]
        else:
            group = s[i:]
        result += group
        i += 1
    return result