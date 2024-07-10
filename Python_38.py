def decode_cyclic(s: str):
    n = len(s)
    groups = [s[i] for i in range(n) if i % 4 == 3]
    return "".join(groups)