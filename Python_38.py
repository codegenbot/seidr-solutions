def decode_cyclic(s: str):
    result = ""
    while len(s) > 0:
        if len(s) >= 3:
            for i in range(2):
                s = s[1:] + s[0]
        else:
            result += s
            break
        result += s[:3]
        s = s[3:]
    return result