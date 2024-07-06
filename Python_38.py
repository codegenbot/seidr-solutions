def encode_cyclic(s: str):
    if len(s) % 3 != 0:
        raise ValueError("Input string length must be a multiple of 3")
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)


def decode_cyclic(s: str):
    if len(s) % 3 != 0:
        raise ValueError("Input string length must be a multiple of 3")
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    groups = [group[-1] + group[:-1] if len(group) > 2 else group for group in groups]
    return "".join(groups)