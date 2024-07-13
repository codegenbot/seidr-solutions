def encode_cyclic(s: str):
    s += "..." if len(s) % 3 else ""
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    return "".join(group[1:] + group[0] for group in groups)


def decode_cyclic(s: str):
    s += "..." if len(s) % 3 else ""
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    return "".join(
        group[-1] + group[:-1] if len(group) == 3 else group for group in groups
    )