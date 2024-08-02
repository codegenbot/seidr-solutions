def decode_cyclic(s: str):
    result = ""
    while len(s) >= 3:
        result += s[:3]
        s = s[3:]
    if len(s) > 0:
        result += s
    return result