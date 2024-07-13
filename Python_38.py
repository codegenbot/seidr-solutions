def encode_cyclic(s: str):
    n = len(s)
    if n % 3 != 0:
        s += "..." * ((3 - n % 3) // 3 + 1)
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)


def decode_cyclic(s: str):
    n = len(s)
    if n % 3 != 0:
        s = s[: n - (n % 3)]
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    groups = [group[-1] + group[:-1] if len(group) == 3 else group for group in groups]
    return "".join(groups)