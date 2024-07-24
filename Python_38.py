def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        if i + 2 < len(s) and s[i] == s[i + 2]:
            result.append(s[i : i + 3][1])
            i += 3
        elif i + 1 < len(s):
            result.append(s[i])
            i += 1
        else:
            break
    return "".join(result)