def encode_cyclic(s: str):
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)


def decode_cyclic(s: str):
    decoded_groups = [(group[-1] + group[:2]) if len(group) == 3 else group for group in [s[i:i + 3] for i in range(0, len(s), 3)]]
    return "".join(decoded_groups)