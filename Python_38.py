def encode_cyclic(s: str, n: int):
    groups = [s[i : i + n] for i in range(0, len(s), n)]
    groups = [(group[n - 1:] + group[:n - 1]) if len(group) == n else group for group in groups]
    return "".join(groups)

def decode_cyclic(s: str, n: int):
    groups = [s[i : i + n] for i in range(0, len(s), n)]
    groups = [(groups[-1] + groups[0][:-n + 1]) if len(group) == n else group for group in groups]
    return "".join(groups)