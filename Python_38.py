def decode_cyclic(s: str):
    s = input().strip()
    groups = [(s[(3 * i) : 3 * i + 3]) for i in range(len(s) // 3 + 1)]
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    return "".join(groups)