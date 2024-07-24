def encode_cyclic(s: str, n: int):
    if not isinstance(s, str) or not s.isprintable():
        return
    if not isinstance(n, int) or n < 1:
        return

    groups = [s[i : i + n] for i in range(0, len(s), n)]
    groups = [(group[1:] + group[0]) if len(group) == n else group for group in groups]
    return "".join(groups)


def decode_cyclic(s: str, n: int):
    if not isinstance(s, str) or not s.isprintable():
        return
    if not isinstance(n, int) or n < 1:
        return

    groups = [s[i : i + n] for i in range(0, len(s), n)]
    groups = [
        (groups[-1] + groups[0][: -n + 1]) if len(group) == n else group
        for group in groups
    ]
    return "".join(groups)