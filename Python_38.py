def encode_cyclic(s: str, n: int):
    if len(s) <= n:
        return s
    groups = [s[i : i + n] for i in range(0, len(s), n)]
    last_group = groups.pop()
    groups = [
        (group[n - 1 :] + group[: n - 1]) if len(group) == n else group
        for group in groups
    ]
    return "".join(groups + [last_group])


def decode_cyclic(s: str, n: int):
    if len(s) <= n:
        return s
    groups = [s[i : i + n] for i in range(0, len(s), n)]
    first_last_groups = (groups[0], groups[-1])
    groups = [
        (groups[0] + groups[-1][: -n + 1]) if len(group) == n else group
        for group in groups[1:-1]
    ]
    return "".join([first_last_groups[0]] + list(groups) + [first_last_groups[1]])