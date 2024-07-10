def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if s[i] in [s[1], s[2]]:
            group = [s[j] for j in range(i, min(i + 3, len(s)))]
            i += 3
        else:
            group = s[i : i + 3]
            i += 3
        result += "".join(group[1:] + group[0])
    return result