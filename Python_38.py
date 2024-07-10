def decode_cyclic(s: str):
    result = ""
    while len(s) >= 3:
        for i in range(0, len(s), 3):
            if i == len(s) - 1:
                result += s[i]
            else:
                result += s[i+1] + s[i] + s[i+2][0]
        s = s[3:]
    return result + s