def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        if i + 2 < len(s):
            result.append((s[i + 2] + s[i : i + 2]))
        else:
            result.append(s[i:])
        i += 3

    return "".join(result)