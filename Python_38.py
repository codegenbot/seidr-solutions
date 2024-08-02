def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 2 < len(s) and s[i] == s[i + 2]:
            result += s[i] * ((s[i + 1] - "0" + 3) % 3 + 1)
        else:
            result += s[i : i + 3]
        i += 3
    return result