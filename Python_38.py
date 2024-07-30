def encode_cyclic(s: str):
    s = s.ljust((len(s) + 2) // 3 * 3, ' ')  # Pad input string with spaces if needed
    groups = [s[(3 * i) : 3 * (i + 1)] for i in range(len(s) // 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)


def decode_cyclic(s: str):
    s = s.ljust((len(s) + 2) // 3 * 3, ' ')  # Pad input string with spaces if needed
    return "".join(
        [
            (group[-1] + group[:-1]) if len(group) == 3 else group
            for group in [
                s[(3 * i) : 3 * (i + 1)] for i in range(len(s) // 3)
            ]
        ]
    )