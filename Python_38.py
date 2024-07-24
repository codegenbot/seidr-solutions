def decode_cyclic(s: str, n: int):
    groups = [s[i : i + n] for i in range(0, len(s), n)]
    groups = [(group[n - 1 :] + group[: n - 1][::-1]) for group in groups]
    return "".join(groups)