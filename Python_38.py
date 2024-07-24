def decode_cyclic(s: str, n: int):
    if len(s) <= n:
        return s
    groups = [s[i : i + n] for i in range(0, len(s), n)]
    result = [
        group[-1] + group[1:-1][::-1] if len(group) == n else group for group in groups
    ]
    return "".join(result)