def decode_cyclic(s: str):
    result = ""
    while len(s) > 2:
        for i in range(3):
            if i == 0 or len(s) <= 2:
                result += s[0]
                s = s[1:]
            else:
                result += s[-1]
                s = s[:-1]
    return result + s