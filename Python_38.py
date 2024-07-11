def encode_cyclic(s: str):
    n = (len(s) + 2) // 3
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range(n)] + ['']*(3-n)
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

def decode_cyclic(s: str):
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    result = ""
    for i, group in enumerate(groups):
        if i % 2 == 1:
            group = group[-1] + group[:-1]
        result += group
    return result