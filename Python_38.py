def decode_cyclic(s: str):
    result = ""
    while len(s) > 2:
        for i in range(3):
            result += s[0]
            s = s[1:]
        if len(s) == 2:
            result += s[:1] + s[1]
            break
        elif len(s) == 1:
            result += s
            break
    return result + s