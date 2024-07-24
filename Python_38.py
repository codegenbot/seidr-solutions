def decode_cyclic(s: str, n: int):
    if len(s) <= n:
        return s
    groups = [s[i : i + n] for i in range(0, len(s), n)]
    last_group = groups[-1]
    groups[-1] = groups[0]
    groups[0] = (last_group[n - 1:] + last_group[:n-1]) if len(last_group) == n else last_group
    return "".join(groups)