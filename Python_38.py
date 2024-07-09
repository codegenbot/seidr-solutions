def decode_cyclic(s: str):
    groups = [s[i] + s[j] for i in range(0, len(s), 2) for j in range(1, len(s), 2)]
    return "".join(
        group[0] if len(group) == 3 else group
        for group in zip_longest([*iter(groups)], s)
    )