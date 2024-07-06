def decode_cyclic(s: str):
    n = len(s) // 3
    groups = [s[(i * n):min((i + 1) * n, len(s))] for i in range(n)]
    return "".join(groups)