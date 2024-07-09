def decode_cyclic(s: str):
    if len(s) % 3 != 0:
        return "Error: Input string length must be a multiple of 3."
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    decoded_groups = [
        (group[2:] + group[:2]) if len(group) == 3 else group for group in groups
    ]
    return "".join(decoded_groups)