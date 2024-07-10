def decode_cyclic(s: str):
    n = len(s)
    groups = [s[(3 * i) : min((3 * i + 3), n)] for i in range((n + 2) // 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    return "".join(groups)