def decode_cyclic(s: str):
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    return "".join(
        group[1] + group[0] + g if g else group
        for group in groups
        for g in [group[2:], group[:2]]
        if g
    )