def decode_cyclic(s: str):
    result = ""
    i = len(s) - 1
    while i >= 0:
        if (i + 1) % 3 == 0 and i > 0:
            result = s[i] + result
        else:
            result = s[i] + result
        i -= 1
    return result