def encode_cyclic(s: str, n: int):
    groups = [s[i : i + n] for i in range(0, len(s), n)]
    result = []
    for group in groups:
        if len(group) == n:
            result.append(group[-1] + group[:-1])
        else:
            result.append(group)
    return "".join(result)


def decode_cyclic(s: str, n: int):
    groups = [s[i : i + n] for i in range(0, len(s), n)]
    result = []
    for group in groups:
        if len(group) == n:
            result.append(group[1:] + group[0])
        else:
            result.append(group)
    return "".join(result)