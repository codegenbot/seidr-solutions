def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if (i + 3) % 3 == 0:
            group = s[i : i + 3][::-1]
        else:
            group = s[i - 1 : i] + s[i]
        result += group
        i += 3
    return result