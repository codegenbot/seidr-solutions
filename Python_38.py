def decode_cyclic(s: str):
    length = len(s)
    for i in range(0, length, 3):
        if i == length - 1:
            if i < 2:
                break
            result += s[i]
        else:
            result += s[i+1] + s[i]
    return result