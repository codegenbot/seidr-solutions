def decode_cyclic(s: str):
    result = ""
    while s:
        if len(s) >= 3:
            result += (s[1:2] + s[0]) + s[2:]
            s = s[3:]
        else:
            if len(s) == 1:
                result += s
            elif len(s) == 2:
                result += s[1] + s[0]
            break
    return result