def decode_cyclic(s: str, n: int):
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    decoded_groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return [decoded_groups[i:i+n] for i in range(0, len(decoded_groups), n)]