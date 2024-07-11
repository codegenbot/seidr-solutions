def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if (i + 3) <= len(s):
            result += s[i : i + 3][1::-1] + s[i]
        else:
            result += s[i:] + "x" * ((3 - (len(s) - i)) % 3)
        i += 3
    return result