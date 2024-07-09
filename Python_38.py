def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i % 3 == 0 and i + 2 < len(s):
            result += s[i + 2] + s[i + 1] + s[i]
        else:
            result += s[i]
        i += 1
    return result