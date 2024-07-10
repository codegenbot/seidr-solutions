def decode_cyclic(s: str):
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    decoded = [groups[1][1:] + groups[1][0], *groups[:-1]]
    return "".join("".join(group) for group in decoded)