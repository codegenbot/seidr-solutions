def encode_cyclic(s: str):
    """
    Encodes the input string in a cyclic manner.
    """
    groups = [s[i:] + s[:i] for i in range(len(s))]
    return "".join(groups)

def decode_cyclic(s: str):
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    return "".join(groups)