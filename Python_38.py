def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if (i + 2) % 3 == 0:
            result += s[i - 1] + s[i]
        else:
            result += s[i]
        i += 1
    return result