def decode_cyclic(s: str):
    n = len(s)
    groups = [s[i : i + 3] for i in range(0, n - (n % 3), 3)]
    remaining = s[n - (n % 3):]
    if remaining:
        groups[0] += remaining
    decoded_groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(decoded_groups)