def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        if i + 2 < len(s) and s[i] == s[i + 2]:
            result.append(s[i : i + 3][1])
        else:
            result.extend([s[i], s[i + 2]])
        i += 3
    return "".join(result)