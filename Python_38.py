def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if (i + 3) <= len(s):
            result += s[i : i + 2] + s[i]
        else:
            result += s[i:]
        i += 1
    return result