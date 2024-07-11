def encode_cyclic(s: str):
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    if len(s) % 3 != 0:
        groups.append(s[-1])
    return "".join(g[1:] + g[0] if len(g) == 3 else g for g in groups)


def decode_cyclic(s: str):
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    if len(s) % 3 != 0:
        groups[-1] = groups[-1][1] + groups[-1][0]
    return "".join(g[1:] + g[0] if len(g) == 3 else g for g in groups)