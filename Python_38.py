def decode_cyclic(s: str):
    groups = [s[(i * 3) : min((i * 3) + 3, len(s))] for i in range(len(s) // 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group[0]
        for group in reversed(groups)
    ]
    return "".join([group[0] if len(group) > 1 else group for group in groups])