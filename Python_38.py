def decode_cyclic(s: str):
    result = ""
    while len(s) > 2:
        for i in range(0, len(s), 3):
            if i == len(s) - 1:
                result += s[i]
            else:
                result += s[i+1] + s[i]
    return result + s[len(s)-1]