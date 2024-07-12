def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        result.append(s[i : i + 3])
        if i == len(s) - 1:
            break
        i += 3
    if i != len(s) - 1:
        result.append(s[i:])
    return "".join(result)