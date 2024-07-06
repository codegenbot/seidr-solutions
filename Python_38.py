def decode_cyclic(s: str):
    if len(s) % 3 != 0:
        print("Input string must have a length that is a multiple of 3")
        return None
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    decoded_groups = [
        (group[-1:] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    return "".join(decoded_groups)